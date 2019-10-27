import micro, {json, send} from 'micro';
import {Lexer, Parser} from 'sleep-notes-parser';

const parser = new Parser();
parser.setLanguage(SleepNotes);

export default micro(async (req, res) => {
    const {note} = await json(req);
    const lexingResult = Lexer.tokenize(note);
    Parser.input = lexingResult.tokens;
    const parsed = Parser.sleepNote();
    send(res, 200, {
        parsed,
    });
});