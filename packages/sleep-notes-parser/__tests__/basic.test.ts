import {Lexer, Parser} from '../src/main';

describe('basic test', () => {
    it('parses a basic sleep note', () => {
        const text = `
        Oct 9-10
        Bedtime: 8pm
        Slept 8-11:45
        Slept 12:10-2:15
        Slept 2:25-4:10
        Slept 4:25-6:30
        Slept 7:05–8:05am
        Wake up: 8:05 (~11 hours slept)
        1st nap: 9:10-10:50
        2nd nap: 12:45-1:25
        3rd nap: (on/off since 2:50) 3:05-4:05
        Bedtime: 6:35
        `;
        const lexingResult = Lexer.tokenize(text);
        Parser.input = lexingResult.tokens;
        const sleepNote = Parser.sleepNote();
        if (Parser.errors.length > 0) {
            console.log('start line: ', Parser.errors[0].token.startLine);
        }
        expect(Parser.errors).toHaveLength(0);
        expect(sleepNote).toStrictEqual({
            dateRange: {
                month: 'Oct',
                from: 9,
                to: 10,
            },
            entries: {
                bedtime: {hour: 8, minute: 0, ampm: 'pm'},
                nightSleeps: [
                    {
                        from: {hour: 8, minute: 0},
                        to: {hour: 11, minute: 45},
                    },
                    {
                        from: {hour: 12, minute: 10},
                        to: {hour: 2, minute: 15},
                    },
                    {
                        from: {hour: 2, minute: 25},
                        to: {hour: 4, minute: 10},
                    },
                    {
                        from: {hour: 4, minute: 25},
                        to: {hour: 6, minute: 30},
                    },
                    {
                        from: {hour: 7, minute: 5},
                        to: {hour: 8, minute: 5, ampm: 'am'},
                    }
                ],
                wakeup: {hour: 8, minute: 5},
                naps: [
                    {
                        from: {hour: 9, minute: 10},
                        to: {hour: 10, minute: 50},
                    },
                    {
                        from: {hour: 12, minute: 45},
                        to: {hour: 1, minute: 25},
                    },
                    {
                        from: {hour: 3, minute: 5},
                        to: {hour: 4, minute: 5},
                    }
                ],
                nextBedtime: {hour: 6, minute: 35},
            },
        });
    })
});