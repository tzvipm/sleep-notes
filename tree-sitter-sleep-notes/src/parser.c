#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 52
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_Jan = 1,
  anon_sym_Feb = 2,
  anon_sym_Mar = 3,
  anon_sym_Apr = 4,
  anon_sym_May = 5,
  anon_sym_Jun = 6,
  anon_sym_Jul = 7,
  anon_sym_Aug = 8,
  anon_sym_Sep = 9,
  anon_sym_Sept = 10,
  anon_sym_Oct = 11,
  anon_sym_Nov = 12,
  anon_sym_Dec = 13,
  sym_date_day = 14,
  anon_sym_DASH = 15,
  anon_sym_ = 16,
  anon_sym_Bedtime_COLON = 17,
  anon_sym_Slept = 18,
  anon_sym_Wakeup_COLON = 19,
  anon_sym_nap_COLON = 20,
  sym_time_hour = 21,
  sym_time_minute = 22,
  sym_time_separator = 23,
  sym_am_specifier = 24,
  sym_pm_specifier = 25,
  anon_sym_1st = 26,
  anon_sym_2nd = 27,
  anon_sym_3rd = 28,
  aux_sym_ordinal_token1 = 29,
  anon_sym_LPAREN = 30,
  aux_sym_comment_token1 = 31,
  anon_sym_RPAREN = 32,
  sym_source_file = 33,
  sym_sleep_note = 34,
  sym_date_range = 35,
  sym_short_month = 36,
  sym_range_specifier = 37,
  sym_entry_list = 38,
  sym__entry = 39,
  sym_bedtime_entry = 40,
  sym_slept_entry = 41,
  sym_wakeup_entry = 42,
  sym_nap_entry = 43,
  sym_time_range = 44,
  sym_time = 45,
  sym_ordinal = 46,
  sym_comment = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_entry_list_repeat1 = 49,
  aux_sym__entry_repeat1 = 50,
  aux_sym__entry_repeat2 = 51,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Jan] = "Jan",
  [anon_sym_Feb] = "Feb",
  [anon_sym_Mar] = "Mar",
  [anon_sym_Apr] = "Apr",
  [anon_sym_May] = "May",
  [anon_sym_Jun] = "Jun",
  [anon_sym_Jul] = "Jul",
  [anon_sym_Aug] = "Aug",
  [anon_sym_Sep] = "Sep",
  [anon_sym_Sept] = "Sept",
  [anon_sym_Oct] = "Oct",
  [anon_sym_Nov] = "Nov",
  [anon_sym_Dec] = "Dec",
  [sym_date_day] = "date_day",
  [anon_sym_DASH] = "-",
  [anon_sym_] = "–",
  [anon_sym_Bedtime_COLON] = "Bedtime:",
  [anon_sym_Slept] = "Slept",
  [anon_sym_Wakeup_COLON] = "Wake up:",
  [anon_sym_nap_COLON] = "nap:",
  [sym_time_hour] = "time_hour",
  [sym_time_minute] = "time_minute",
  [sym_time_separator] = "time_separator",
  [sym_am_specifier] = "am_specifier",
  [sym_pm_specifier] = "pm_specifier",
  [anon_sym_1st] = "1st",
  [anon_sym_2nd] = "2nd",
  [anon_sym_3rd] = "3rd",
  [aux_sym_ordinal_token1] = "ordinal_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_sleep_note] = "sleep_note",
  [sym_date_range] = "date_range",
  [sym_short_month] = "short_month",
  [sym_range_specifier] = "range_specifier",
  [sym_entry_list] = "entry_list",
  [sym__entry] = "_entry",
  [sym_bedtime_entry] = "bedtime_entry",
  [sym_slept_entry] = "slept_entry",
  [sym_wakeup_entry] = "wakeup_entry",
  [sym_nap_entry] = "nap_entry",
  [sym_time_range] = "time_range",
  [sym_time] = "time",
  [sym_ordinal] = "ordinal",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_entry_list_repeat1] = "entry_list_repeat1",
  [aux_sym__entry_repeat1] = "_entry_repeat1",
  [aux_sym__entry_repeat2] = "_entry_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Jan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Feb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Apr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_May] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Aug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Oct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dec] = {
    .visible = true,
    .named = false,
  },
  [sym_date_day] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bedtime_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Slept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Wakeup_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nap_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_time_hour] = {
    .visible = true,
    .named = true,
  },
  [sym_time_minute] = {
    .visible = true,
    .named = true,
  },
  [sym_time_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_am_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_pm_specifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1st] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2nd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3rd] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ordinal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_sleep_note] = {
    .visible = true,
    .named = true,
  },
  [sym_date_range] = {
    .visible = true,
    .named = true,
  },
  [sym_short_month] = {
    .visible = true,
    .named = true,
  },
  [sym_range_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_list] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
  },
  [sym_bedtime_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_slept_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_wakeup_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_nap_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_time_range] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_ordinal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__entry_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '2') ADVANCE(69);
      if (lookahead == '3') ADVANCE(70);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(9);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 8211) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(9);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 8211) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '3') ADVANCE(72);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Jan);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Feb);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Mar);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Apr);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Jun);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Jul);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Aug);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Sep);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Sept);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Oct);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Nov);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Dec);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_date_day);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_date_day);
      if (lookahead == 'n') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_date_day);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_date_day);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(68);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_date_day);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_date_day);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Bedtime_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_Slept);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Wakeup_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_nap_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_time_hour);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_time_hour);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_time_minute);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_time_separator);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_am_specifier);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_pm_specifier);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_1st);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_2nd);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_3rd);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_ordinal_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 91},
  [50] = {-1},
  [51] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Jan] = ACTIONS(1),
    [anon_sym_Feb] = ACTIONS(1),
    [anon_sym_Mar] = ACTIONS(1),
    [anon_sym_Apr] = ACTIONS(1),
    [anon_sym_May] = ACTIONS(1),
    [anon_sym_Jun] = ACTIONS(1),
    [anon_sym_Jul] = ACTIONS(1),
    [anon_sym_Aug] = ACTIONS(1),
    [anon_sym_Sep] = ACTIONS(1),
    [anon_sym_Sept] = ACTIONS(1),
    [anon_sym_Oct] = ACTIONS(1),
    [anon_sym_Nov] = ACTIONS(1),
    [anon_sym_Dec] = ACTIONS(1),
    [sym_date_day] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_Bedtime_COLON] = ACTIONS(1),
    [anon_sym_Slept] = ACTIONS(1),
    [anon_sym_Wakeup_COLON] = ACTIONS(1),
    [anon_sym_nap_COLON] = ACTIONS(1),
    [sym_time_hour] = ACTIONS(1),
    [sym_time_separator] = ACTIONS(1),
    [sym_am_specifier] = ACTIONS(1),
    [sym_pm_specifier] = ACTIONS(1),
    [anon_sym_1st] = ACTIONS(1),
    [anon_sym_2nd] = ACTIONS(1),
    [anon_sym_3rd] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym_sleep_note] = STATE(16),
    [sym_date_range] = STATE(25),
    [sym_short_month] = STATE(45),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Jan] = ACTIONS(7),
    [anon_sym_Feb] = ACTIONS(7),
    [anon_sym_Mar] = ACTIONS(7),
    [anon_sym_Apr] = ACTIONS(7),
    [anon_sym_May] = ACTIONS(7),
    [anon_sym_Jun] = ACTIONS(7),
    [anon_sym_Jul] = ACTIONS(7),
    [anon_sym_Aug] = ACTIONS(7),
    [anon_sym_Sep] = ACTIONS(9),
    [anon_sym_Sept] = ACTIONS(7),
    [anon_sym_Oct] = ACTIONS(7),
    [anon_sym_Nov] = ACTIONS(7),
    [anon_sym_Dec] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_Jan] = ACTIONS(11),
    [anon_sym_Feb] = ACTIONS(11),
    [anon_sym_Mar] = ACTIONS(11),
    [anon_sym_Apr] = ACTIONS(11),
    [anon_sym_May] = ACTIONS(11),
    [anon_sym_Jun] = ACTIONS(11),
    [anon_sym_Jul] = ACTIONS(11),
    [anon_sym_Aug] = ACTIONS(11),
    [anon_sym_Sep] = ACTIONS(13),
    [anon_sym_Sept] = ACTIONS(11),
    [anon_sym_Oct] = ACTIONS(11),
    [anon_sym_Nov] = ACTIONS(11),
    [anon_sym_Dec] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_Bedtime_COLON] = ACTIONS(11),
    [anon_sym_Slept] = ACTIONS(11),
    [anon_sym_Wakeup_COLON] = ACTIONS(11),
    [sym_time_separator] = ACTIONS(15),
    [sym_am_specifier] = ACTIONS(17),
    [sym_pm_specifier] = ACTIONS(17),
    [anon_sym_1st] = ACTIONS(11),
    [anon_sym_2nd] = ACTIONS(11),
    [anon_sym_3rd] = ACTIONS(11),
    [aux_sym_ordinal_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_Jan] = ACTIONS(19),
    [anon_sym_Feb] = ACTIONS(19),
    [anon_sym_Mar] = ACTIONS(19),
    [anon_sym_Apr] = ACTIONS(19),
    [anon_sym_May] = ACTIONS(19),
    [anon_sym_Jun] = ACTIONS(19),
    [anon_sym_Jul] = ACTIONS(19),
    [anon_sym_Aug] = ACTIONS(19),
    [anon_sym_Sep] = ACTIONS(21),
    [anon_sym_Sept] = ACTIONS(19),
    [anon_sym_Oct] = ACTIONS(19),
    [anon_sym_Nov] = ACTIONS(19),
    [anon_sym_Dec] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_Bedtime_COLON] = ACTIONS(19),
    [anon_sym_Slept] = ACTIONS(19),
    [anon_sym_Wakeup_COLON] = ACTIONS(19),
    [sym_am_specifier] = ACTIONS(23),
    [sym_pm_specifier] = ACTIONS(23),
    [anon_sym_1st] = ACTIONS(19),
    [anon_sym_2nd] = ACTIONS(19),
    [anon_sym_3rd] = ACTIONS(19),
    [aux_sym_ordinal_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_Jan] = ACTIONS(25),
    [anon_sym_Feb] = ACTIONS(25),
    [anon_sym_Mar] = ACTIONS(25),
    [anon_sym_Apr] = ACTIONS(25),
    [anon_sym_May] = ACTIONS(25),
    [anon_sym_Jun] = ACTIONS(25),
    [anon_sym_Jul] = ACTIONS(25),
    [anon_sym_Aug] = ACTIONS(25),
    [anon_sym_Sep] = ACTIONS(27),
    [anon_sym_Sept] = ACTIONS(25),
    [anon_sym_Oct] = ACTIONS(25),
    [anon_sym_Nov] = ACTIONS(25),
    [anon_sym_Dec] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_Bedtime_COLON] = ACTIONS(25),
    [anon_sym_Slept] = ACTIONS(25),
    [anon_sym_Wakeup_COLON] = ACTIONS(25),
    [anon_sym_1st] = ACTIONS(25),
    [anon_sym_2nd] = ACTIONS(25),
    [anon_sym_3rd] = ACTIONS(25),
    [aux_sym_ordinal_token1] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_Jan] = ACTIONS(29),
    [anon_sym_Feb] = ACTIONS(29),
    [anon_sym_Mar] = ACTIONS(29),
    [anon_sym_Apr] = ACTIONS(29),
    [anon_sym_May] = ACTIONS(29),
    [anon_sym_Jun] = ACTIONS(29),
    [anon_sym_Jul] = ACTIONS(29),
    [anon_sym_Aug] = ACTIONS(29),
    [anon_sym_Sep] = ACTIONS(31),
    [anon_sym_Sept] = ACTIONS(29),
    [anon_sym_Oct] = ACTIONS(29),
    [anon_sym_Nov] = ACTIONS(29),
    [anon_sym_Dec] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_] = ACTIONS(29),
    [anon_sym_Bedtime_COLON] = ACTIONS(29),
    [anon_sym_Slept] = ACTIONS(29),
    [anon_sym_Wakeup_COLON] = ACTIONS(29),
    [anon_sym_1st] = ACTIONS(29),
    [anon_sym_2nd] = ACTIONS(29),
    [anon_sym_3rd] = ACTIONS(29),
    [aux_sym_ordinal_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [6] = {
    [sym__entry] = STATE(12),
    [sym_bedtime_entry] = STATE(23),
    [sym_comment] = STATE(6),
    [aux_sym_entry_list_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_Jan] = ACTIONS(33),
    [anon_sym_Feb] = ACTIONS(33),
    [anon_sym_Mar] = ACTIONS(33),
    [anon_sym_Apr] = ACTIONS(33),
    [anon_sym_May] = ACTIONS(33),
    [anon_sym_Jun] = ACTIONS(33),
    [anon_sym_Jul] = ACTIONS(33),
    [anon_sym_Aug] = ACTIONS(33),
    [anon_sym_Sep] = ACTIONS(35),
    [anon_sym_Sept] = ACTIONS(33),
    [anon_sym_Oct] = ACTIONS(33),
    [anon_sym_Nov] = ACTIONS(33),
    [anon_sym_Dec] = ACTIONS(33),
    [anon_sym_Bedtime_COLON] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [7] = {
    [sym_sleep_note] = STATE(16),
    [sym_date_range] = STATE(25),
    [sym_short_month] = STATE(45),
    [sym_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_Jan] = ACTIONS(41),
    [anon_sym_Feb] = ACTIONS(41),
    [anon_sym_Mar] = ACTIONS(41),
    [anon_sym_Apr] = ACTIONS(41),
    [anon_sym_May] = ACTIONS(41),
    [anon_sym_Jun] = ACTIONS(41),
    [anon_sym_Jul] = ACTIONS(41),
    [anon_sym_Aug] = ACTIONS(41),
    [anon_sym_Sep] = ACTIONS(44),
    [anon_sym_Sept] = ACTIONS(41),
    [anon_sym_Oct] = ACTIONS(41),
    [anon_sym_Nov] = ACTIONS(41),
    [anon_sym_Dec] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [8] = {
    [sym_sleep_note] = STATE(16),
    [sym_date_range] = STATE(25),
    [sym_short_month] = STATE(45),
    [sym_comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_Jan] = ACTIONS(7),
    [anon_sym_Feb] = ACTIONS(7),
    [anon_sym_Mar] = ACTIONS(7),
    [anon_sym_Apr] = ACTIONS(7),
    [anon_sym_May] = ACTIONS(7),
    [anon_sym_Jun] = ACTIONS(7),
    [anon_sym_Jul] = ACTIONS(7),
    [anon_sym_Aug] = ACTIONS(7),
    [anon_sym_Sep] = ACTIONS(9),
    [anon_sym_Sept] = ACTIONS(7),
    [anon_sym_Oct] = ACTIONS(7),
    [anon_sym_Nov] = ACTIONS(7),
    [anon_sym_Dec] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [9] = {
    [sym__entry] = STATE(12),
    [sym_bedtime_entry] = STATE(23),
    [sym_comment] = STATE(9),
    [aux_sym_entry_list_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_Jan] = ACTIONS(49),
    [anon_sym_Feb] = ACTIONS(49),
    [anon_sym_Mar] = ACTIONS(49),
    [anon_sym_Apr] = ACTIONS(49),
    [anon_sym_May] = ACTIONS(49),
    [anon_sym_Jun] = ACTIONS(49),
    [anon_sym_Jul] = ACTIONS(49),
    [anon_sym_Aug] = ACTIONS(49),
    [anon_sym_Sep] = ACTIONS(51),
    [anon_sym_Sept] = ACTIONS(49),
    [anon_sym_Oct] = ACTIONS(49),
    [anon_sym_Nov] = ACTIONS(49),
    [anon_sym_Dec] = ACTIONS(49),
    [anon_sym_Bedtime_COLON] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_Jan] = ACTIONS(56),
    [anon_sym_Feb] = ACTIONS(56),
    [anon_sym_Mar] = ACTIONS(56),
    [anon_sym_Apr] = ACTIONS(56),
    [anon_sym_May] = ACTIONS(56),
    [anon_sym_Jun] = ACTIONS(56),
    [anon_sym_Jul] = ACTIONS(56),
    [anon_sym_Aug] = ACTIONS(56),
    [anon_sym_Sep] = ACTIONS(58),
    [anon_sym_Sept] = ACTIONS(56),
    [anon_sym_Oct] = ACTIONS(56),
    [anon_sym_Nov] = ACTIONS(56),
    [anon_sym_Dec] = ACTIONS(56),
    [anon_sym_Bedtime_COLON] = ACTIONS(56),
    [anon_sym_Slept] = ACTIONS(56),
    [anon_sym_Wakeup_COLON] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_Jan] = ACTIONS(60),
    [anon_sym_Feb] = ACTIONS(60),
    [anon_sym_Mar] = ACTIONS(60),
    [anon_sym_Apr] = ACTIONS(60),
    [anon_sym_May] = ACTIONS(60),
    [anon_sym_Jun] = ACTIONS(60),
    [anon_sym_Jul] = ACTIONS(60),
    [anon_sym_Aug] = ACTIONS(60),
    [anon_sym_Sep] = ACTIONS(62),
    [anon_sym_Sept] = ACTIONS(60),
    [anon_sym_Oct] = ACTIONS(60),
    [anon_sym_Nov] = ACTIONS(60),
    [anon_sym_Dec] = ACTIONS(60),
    [anon_sym_Bedtime_COLON] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_Jan] = ACTIONS(64),
    [anon_sym_Feb] = ACTIONS(64),
    [anon_sym_Mar] = ACTIONS(64),
    [anon_sym_Apr] = ACTIONS(64),
    [anon_sym_May] = ACTIONS(64),
    [anon_sym_Jun] = ACTIONS(64),
    [anon_sym_Jul] = ACTIONS(64),
    [anon_sym_Aug] = ACTIONS(64),
    [anon_sym_Sep] = ACTIONS(66),
    [anon_sym_Sept] = ACTIONS(64),
    [anon_sym_Oct] = ACTIONS(64),
    [anon_sym_Nov] = ACTIONS(64),
    [anon_sym_Dec] = ACTIONS(64),
    [anon_sym_Bedtime_COLON] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_Jan] = ACTIONS(68),
    [anon_sym_Feb] = ACTIONS(68),
    [anon_sym_Mar] = ACTIONS(68),
    [anon_sym_Apr] = ACTIONS(68),
    [anon_sym_May] = ACTIONS(68),
    [anon_sym_Jun] = ACTIONS(68),
    [anon_sym_Jul] = ACTIONS(68),
    [anon_sym_Aug] = ACTIONS(68),
    [anon_sym_Sep] = ACTIONS(70),
    [anon_sym_Sept] = ACTIONS(68),
    [anon_sym_Oct] = ACTIONS(68),
    [anon_sym_Nov] = ACTIONS(68),
    [anon_sym_Dec] = ACTIONS(68),
    [anon_sym_Bedtime_COLON] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_Jan] = ACTIONS(72),
    [anon_sym_Feb] = ACTIONS(72),
    [anon_sym_Mar] = ACTIONS(72),
    [anon_sym_Apr] = ACTIONS(72),
    [anon_sym_May] = ACTIONS(72),
    [anon_sym_Jun] = ACTIONS(72),
    [anon_sym_Jul] = ACTIONS(72),
    [anon_sym_Aug] = ACTIONS(72),
    [anon_sym_Sep] = ACTIONS(74),
    [anon_sym_Sept] = ACTIONS(72),
    [anon_sym_Oct] = ACTIONS(72),
    [anon_sym_Nov] = ACTIONS(72),
    [anon_sym_Dec] = ACTIONS(72),
    [anon_sym_Bedtime_COLON] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_Jan] = ACTIONS(76),
    [anon_sym_Feb] = ACTIONS(76),
    [anon_sym_Mar] = ACTIONS(76),
    [anon_sym_Apr] = ACTIONS(76),
    [anon_sym_May] = ACTIONS(76),
    [anon_sym_Jun] = ACTIONS(76),
    [anon_sym_Jul] = ACTIONS(76),
    [anon_sym_Aug] = ACTIONS(76),
    [anon_sym_Sep] = ACTIONS(78),
    [anon_sym_Sept] = ACTIONS(76),
    [anon_sym_Oct] = ACTIONS(76),
    [anon_sym_Nov] = ACTIONS(76),
    [anon_sym_Dec] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_Jan] = ACTIONS(80),
    [anon_sym_Feb] = ACTIONS(80),
    [anon_sym_Mar] = ACTIONS(80),
    [anon_sym_Apr] = ACTIONS(80),
    [anon_sym_May] = ACTIONS(80),
    [anon_sym_Jun] = ACTIONS(80),
    [anon_sym_Jul] = ACTIONS(80),
    [anon_sym_Aug] = ACTIONS(80),
    [anon_sym_Sep] = ACTIONS(82),
    [anon_sym_Sept] = ACTIONS(80),
    [anon_sym_Oct] = ACTIONS(80),
    [anon_sym_Nov] = ACTIONS(80),
    [anon_sym_Dec] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [17] = {
    [sym_bedtime_entry] = STATE(11),
    [sym_nap_entry] = STATE(24),
    [sym_ordinal] = STATE(42),
    [sym_comment] = STATE(17),
    [aux_sym__entry_repeat2] = STATE(21),
    [anon_sym_Bedtime_COLON] = ACTIONS(37),
    [anon_sym_1st] = ACTIONS(84),
    [anon_sym_2nd] = ACTIONS(84),
    [anon_sym_3rd] = ACTIONS(84),
    [aux_sym_ordinal_token1] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [18] = {
    [sym_bedtime_entry] = STATE(13),
    [sym_nap_entry] = STATE(24),
    [sym_ordinal] = STATE(42),
    [sym_comment] = STATE(18),
    [aux_sym__entry_repeat2] = STATE(17),
    [anon_sym_Bedtime_COLON] = ACTIONS(37),
    [anon_sym_1st] = ACTIONS(84),
    [anon_sym_2nd] = ACTIONS(84),
    [anon_sym_3rd] = ACTIONS(84),
    [aux_sym_ordinal_token1] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [19] = {
    [sym_bedtime_entry] = STATE(13),
    [sym_nap_entry] = STATE(24),
    [sym_ordinal] = STATE(42),
    [sym_comment] = STATE(19),
    [aux_sym__entry_repeat2] = STATE(21),
    [anon_sym_Bedtime_COLON] = ACTIONS(37),
    [anon_sym_1st] = ACTIONS(84),
    [anon_sym_2nd] = ACTIONS(84),
    [anon_sym_3rd] = ACTIONS(84),
    [aux_sym_ordinal_token1] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [20] = {
    [sym_bedtime_entry] = STATE(14),
    [sym_nap_entry] = STATE(24),
    [sym_ordinal] = STATE(42),
    [sym_comment] = STATE(20),
    [aux_sym__entry_repeat2] = STATE(19),
    [anon_sym_Bedtime_COLON] = ACTIONS(37),
    [anon_sym_1st] = ACTIONS(84),
    [anon_sym_2nd] = ACTIONS(84),
    [anon_sym_3rd] = ACTIONS(84),
    [aux_sym_ordinal_token1] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [21] = {
    [sym_nap_entry] = STATE(24),
    [sym_ordinal] = STATE(42),
    [sym_comment] = STATE(21),
    [aux_sym__entry_repeat2] = STATE(21),
    [anon_sym_Bedtime_COLON] = ACTIONS(86),
    [anon_sym_1st] = ACTIONS(88),
    [anon_sym_2nd] = ACTIONS(88),
    [anon_sym_3rd] = ACTIONS(88),
    [aux_sym_ordinal_token1] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [anon_sym_Bedtime_COLON] = ACTIONS(91),
    [anon_sym_Slept] = ACTIONS(91),
    [anon_sym_Wakeup_COLON] = ACTIONS(91),
    [anon_sym_1st] = ACTIONS(91),
    [anon_sym_2nd] = ACTIONS(91),
    [anon_sym_3rd] = ACTIONS(91),
    [aux_sym_ordinal_token1] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [23] = {
    [sym_slept_entry] = STATE(38),
    [sym_wakeup_entry] = STATE(20),
    [sym_comment] = STATE(23),
    [aux_sym__entry_repeat1] = STATE(26),
    [anon_sym_Slept] = ACTIONS(93),
    [anon_sym_Wakeup_COLON] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [anon_sym_Bedtime_COLON] = ACTIONS(97),
    [anon_sym_1st] = ACTIONS(97),
    [anon_sym_2nd] = ACTIONS(97),
    [anon_sym_3rd] = ACTIONS(97),
    [aux_sym_ordinal_token1] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [25] = {
    [sym_entry_list] = STATE(15),
    [sym__entry] = STATE(12),
    [sym_bedtime_entry] = STATE(23),
    [sym_comment] = STATE(25),
    [aux_sym_entry_list_repeat1] = STATE(6),
    [anon_sym_Bedtime_COLON] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [26] = {
    [sym_slept_entry] = STATE(38),
    [sym_wakeup_entry] = STATE(18),
    [sym_comment] = STATE(26),
    [aux_sym__entry_repeat1] = STATE(29),
    [anon_sym_Slept] = ACTIONS(93),
    [anon_sym_Wakeup_COLON] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [27] = {
    [sym_comment] = STATE(27),
    [anon_sym_Bedtime_COLON] = ACTIONS(99),
    [anon_sym_1st] = ACTIONS(99),
    [anon_sym_2nd] = ACTIONS(99),
    [anon_sym_3rd] = ACTIONS(99),
    [aux_sym_ordinal_token1] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [anon_sym_Bedtime_COLON] = ACTIONS(101),
    [anon_sym_1st] = ACTIONS(101),
    [anon_sym_2nd] = ACTIONS(101),
    [anon_sym_3rd] = ACTIONS(101),
    [aux_sym_ordinal_token1] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [29] = {
    [sym_slept_entry] = STATE(38),
    [sym_comment] = STATE(29),
    [aux_sym__entry_repeat1] = STATE(29),
    [anon_sym_Slept] = ACTIONS(103),
    [anon_sym_Wakeup_COLON] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [30] = {
    [sym_range_specifier] = STATE(37),
    [sym_comment] = STATE(30),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [31] = {
    [sym_range_specifier] = STATE(41),
    [sym_comment] = STATE(31),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [32] = {
    [sym_time_range] = STATE(27),
    [sym_time] = STATE(30),
    [sym_comment] = STATE(32),
    [sym_time_hour] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [33] = {
    [sym_time_range] = STATE(36),
    [sym_time] = STATE(30),
    [sym_comment] = STATE(33),
    [sym_time_hour] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [34] = {
    [sym_time] = STATE(28),
    [sym_comment] = STATE(34),
    [sym_time_hour] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [35] = {
    [sym_time] = STATE(10),
    [sym_comment] = STATE(35),
    [sym_time_hour] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [36] = {
    [sym_comment] = STATE(36),
    [anon_sym_Slept] = ACTIONS(114),
    [anon_sym_Wakeup_COLON] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [37] = {
    [sym_time] = STATE(22),
    [sym_comment] = STATE(37),
    [sym_time_hour] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [38] = {
    [sym_comment] = STATE(38),
    [anon_sym_Slept] = ACTIONS(116),
    [anon_sym_Wakeup_COLON] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [39] = {
    [sym_comment] = STATE(39),
    [sym_date_day] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [40] = {
    [sym_comment] = STATE(40),
    [anon_sym_Bedtime_COLON] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [41] = {
    [sym_comment] = STATE(41),
    [sym_date_day] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [42] = {
    [sym_comment] = STATE(42),
    [anon_sym_nap_COLON] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [43] = {
    [sym_comment] = STATE(43),
    [sym_time_minute] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [44] = {
    [sym_comment] = STATE(44),
    [anon_sym_nap_COLON] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [45] = {
    [sym_comment] = STATE(45),
    [sym_date_day] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [46] = {
    [sym_comment] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [47] = {
    [sym_comment] = STATE(47),
    [sym_date_day] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [48] = {
    [sym_comment] = STATE(48),
    [sym_time_hour] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [49] = {
    [aux_sym_comment_token1] = ACTIONS(136),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(138),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(140),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(49),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(47),
  [9] = {.count = 1, .reusable = false}, SHIFT(47),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_time, 1),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_time, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(43),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_time, 3),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_time, 3),
  [23] = {.count = 1, .reusable = true}, SHIFT(4),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_time, 4),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_time, 4),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_time, 2),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_time, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_entry_list, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_entry_list, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(35),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [44] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_list_repeat1, 2),
  [51] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_list_repeat1, 2),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_list_repeat1, 2), SHIFT_REPEAT(35),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_bedtime_entry, 2),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym_bedtime_entry, 2),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym__entry, 5),
  [62] = {.count = 1, .reusable = false}, REDUCE(sym__entry, 5),
  [64] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_list_repeat1, 1),
  [66] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_list_repeat1, 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym__entry, 4),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym__entry, 4),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym__entry, 3),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym__entry, 3),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_sleep_note, 2),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_sleep_note, 2),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [82] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [84] = {.count = 1, .reusable = true}, SHIFT(44),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entry_repeat2, 2),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym__entry_repeat2, 2), SHIFT_REPEAT(44),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_time_range, 3),
  [93] = {.count = 1, .reusable = true}, SHIFT(33),
  [95] = {.count = 1, .reusable = true}, SHIFT(34),
  [97] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entry_repeat2, 1),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_nap_entry, 3),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_wakeup_entry, 2),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym__entry_repeat1, 2), SHIFT_REPEAT(33),
  [106] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entry_repeat1, 2),
  [108] = {.count = 1, .reusable = true}, SHIFT(48),
  [110] = {.count = 1, .reusable = true}, SHIFT(39),
  [112] = {.count = 1, .reusable = true}, SHIFT(2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_slept_entry, 2),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entry_repeat1, 1),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_range_specifier, 1),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_date_range, 4),
  [122] = {.count = 1, .reusable = true}, SHIFT(40),
  [124] = {.count = 1, .reusable = true}, SHIFT(32),
  [126] = {.count = 1, .reusable = true}, SHIFT(3),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_ordinal, 1),
  [130] = {.count = 1, .reusable = true}, SHIFT(31),
  [132] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_short_month, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(51),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [140] = {.count = 1, .reusable = true}, SHIFT(50),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sleepnotes(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
