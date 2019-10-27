import {Lexer, createToken} from 'chevrotain';

export const ShortMonth = createToken({
    name: 'ShortMonth',
    pattern: /Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Sept|Oct|Nov|Dec/,
});

export const Ordinal = createToken({
    name: 'Ordinal',
    pattern: /1st|2nd|3rd|(([4-9]|(1[0-9]))th)/,
});

export const Numeric = createToken({
    name: 'Numeric',
    pattern: /[0-9]+/,
});

export const RangeSpecifier = createToken({
    name: 'RangeSpecifier',
    pattern: /-|–/,
});

export const BedtimePrefix = createToken({
    name: 'BedTimePrefix',
    pattern: "Bedtime:",
});

export const SleptPrefix = createToken({
    name: 'SleptPrefix',
    pattern: "Slept",
});

export const WakeupPrefix = createToken({
    name: 'WakeupPrefix',
    pattern: "Wake up:",
});

export const NapPrefix = createToken({
    name: 'NapPrefix',
    pattern: 'nap:',
});

export const TimeSeparator = createToken({
    name: 'TimeSeparator',
    pattern: ":",
});

export const Ish = createToken({
    name: 'Ish',
    pattern: "ish",
});

export const TimeAm = createToken({
    name: 'TimeAm',
    pattern: "am",
});

export const TimePm = createToken({
    name: 'TimePm',
    pattern: "pm",
});

export const Comment = createToken({
    name: 'Comment',
    pattern: /\([^\)]*\)/,
    group: Lexer.SKIPPED,
});

export const Whitespace = createToken({
    name: 'Whitespace',
    pattern: /\s+/,
    group: Lexer.SKIPPED,
});
