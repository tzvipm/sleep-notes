import {EmbeddedActionsParser, IToken} from 'chevrotain';
import * as Tokens from './tokens';
import {allTokens} from './lexer';

function decimal(token: IToken): number {
    return parseInt(token.image, 10);
}

class CParser extends EmbeddedActionsParser {
    constructor() {
        super(allTokens);

        const $ = this as any;

        $.RULE("sleepNote", () => {
            const dateRange = $.SUBRULE($.dateRange);
            const entries = $.SUBRULE($.entryList);
            return {dateRange, entries};
        });

        $.RULE("dateRange", () => {
            const month = $.CONSUME(Tokens.ShortMonth).image;
            const from = decimal($.CONSUME(Tokens.Numeric, {LABEL: 'from'}));
            $.CONSUME(Tokens.RangeSpecifier);
            const to = decimal($.CONSUME2(Tokens.Numeric, {LABEL: 'to'}));
            return {month, from, to};
        });

        $.RULE("entryList", () => {
            const bedtime = $.SUBRULE($.bedtimeEntry, {LABEL: 'bedtime'});
            const nightSleeps = [];
            $.MANY(() => {
                nightSleeps.push($.SUBRULE($.sleptEntry));
            }, {LABEL: 'nightSleeps'});
            const wakeup = $.SUBRULE($.wakeupEntry);
            const naps = [];
            $.MANY2(() => {
                naps.push($.SUBRULE($.napEntry));
            }, {LABEL: 'naps'});
            const nextBedtime = $.SUBRULE2($.bedtimeEntry, {LABEL: 'nextBedtime'});
            return {
                bedtime,
                nightSleeps,
                wakeup,
                naps,
                nextBedtime,
            };
        });

        $.RULE("bedtimeEntry", () => {
            $.CONSUME(Tokens.BedtimePrefix);
            return $.SUBRULE($.time);
        });

        $.RULE("sleptEntry", () => {
            $.CONSUME(Tokens.SleptPrefix);
            return $.SUBRULE($.timeRange);
        });

        $.RULE("wakeupEntry", () => {
            $.CONSUME(Tokens.WakeupPrefix);
            return $.SUBRULE($.time);
        });

        $.RULE("napEntry", () => {
            $.CONSUME(Tokens.Ordinal);
            $.CONSUME(Tokens.NapPrefix);
            return $.SUBRULE($.timeRange);
        });

        $.RULE("time", () => {
            const hour = decimal($.CONSUME(Tokens.Numeric, {LABEL: 'hour'}));
            let minute = 0;
            $.OPTION(() => {
                $.CONSUME(Tokens.TimeSeparator);
                minute = decimal($.CONSUME2(Tokens.Numeric, {LABEL: 'minute'}));
            }, {LABEL: 'minute'});
            let ampm;
            $.OPTION2(() => {
                $.OR([
                    { ALT: () => ampm = $.CONSUME(Tokens.TimeAm).image},
                    { ALT: () => ampm = $.CONSUME(Tokens.TimePm).image},
                ]);
            }, {LABEL: 'ampm'});
            $.OPTION3(() => $.CONSUME(Tokens.Ish), {LABEL: 'ish'});
            let time: Time = {hour, minute};
            if (ampm) {
                time.ampm = ampm;
            }
            return time;
        });

        $.RULE("timeRange", () => {
            const from = $.SUBRULE($.time, {LABEL: 'from'});
            $.CONSUME(Tokens.RangeSpecifier);
            const to = $.SUBRULE2($.time, {LABEL: 'to'});
            return {from, to};
        })

        this.performSelfAnalysis();
    }
}

interface Time {
    hour: number;
    minute: number;
    ampm?: 'am' | 'pm';
}

interface TimeRange {
    from: Time;
    to: Time;
}

interface SleepNote {
    dateRange: {
        month: string,
        from: number,
        to: number,
    };
    entries: {
        bedtime: Time,
        nightSleeps: TimeRange[],
        wakeup: Time,
        naps: TimeRange[],
        nextBedtime: Time,
    };
}

const Parser = new CParser() as CParser & {
    sleepNote(): SleepNote;
};

export {Parser};