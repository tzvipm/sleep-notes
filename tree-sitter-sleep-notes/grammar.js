module.exports = grammar({
  name: 'sleepnotes',

  rules: {
    source_file: $ => 'hello',
    time_hour: $ => /1[0-2]|[0-9]/,
    time_minute: $ => /[0-5][0-9]/,
  }
});