module.exports = grammar({
  name: "sleepnotes",

  rules: {
    source_file: $ => repeat($.sleep_note),
    sleep_note: $ => seq($.date_range, $.entry_list),
    date_range: $ =>
      seq($.short_month, $.date_day, $.range_specifier, $.date_day),
    short_month: $ =>
      choice(
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Sept",
        "Oct",
        "Nov",
        "Dec"
      ),
    date_day: $ => /[1-9]|([1-2][0-9])|(3[0-1])/,
    range_specifier: $ => choice("-", "–"),
    entry_list: $ => repeat1($._entry),
    _entry: $ =>
      seq(
        $.bedtime_entry,
        repeat($.slept_entry),
        $.wakeup_entry,
        repeat($.nap_entry),
        $.bedtime_entry
      ),
    bedtime_entry: $ => seq("Bedtime:", $.time),
    slept_entry: $ => seq("Slept", $.time_range),
    wakeup_entry: $ => seq("Wake up:", $.time),
    nap_entry: $ => seq($.ordinal, "nap:", $.time_range),
    time_range: $ => seq($.time, $.range_specifier, $.time),
    time_hour: $ => /1[0-2]|[0-9]/,
    time_minute: $ => /[0-5][0-9]/,
    time_separator: $ => ":",
    time: $ =>
      seq(
        $.time_hour,
        optional(seq($.time_separator, $.time_minute)),
        optional(choice($.am_specifier, $.pm_specifier))
      ),
    am_specifier: $ => "am",
    pm_specifier: $ => "pm",
    ordinal: $ => choice("1st", "2nd", "3rd", /([4-9]|(1[0-9]))th/),
    comment: $ => seq("(", /[^\)]*/, ")")
  },

  extras: $ => [$.comment, /\s/]
});
