import micro, {json, send} from 'micro';
const Parser = require('tree-sitter');
const SleepNotes = require('tree-sitter-sleep-notes');

const parser = new Parser();
parser.setLanguage(SleepNotes);

export default micro(async (req, res) => {
    const {note} = await json(req);
    const tree = parser.parse(note);
    send(res, 200, {
        parsed: tree.rootNode.toString(),
    });
});