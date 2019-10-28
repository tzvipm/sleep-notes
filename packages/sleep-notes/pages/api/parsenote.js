import {Lexer, Parser} from 'sleep-notes-parser';

export default (req, res) => {
    const {note} = req.body;
    const lexingResult = Lexer.tokenize(note);
    Parser.input = lexingResult.tokens;
    const parsed = Parser.sleepNote();
    res.status(200).json({
        parsed,
    });
};