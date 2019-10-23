#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 56
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  anon_sym_ish = 24,
  sym_am_specifier = 25,
  sym_pm_specifier = 26,
  anon_sym_1st = 27,
  anon_sym_2nd = 28,
  anon_sym_3rd = 29,
  aux_sym_ordinal_token1 = 30,
  anon_sym_LPAREN = 31,
  aux_sym_comment_token1 = 32,
  anon_sym_RPAREN = 33,
  sym_source_file = 34,
  sym_sleep_note = 35,
  sym_date_range = 36,
  sym_short_month = 37,
  sym_range_specifier = 38,
  sym_entry_list = 39,
  sym__entry = 40,
  sym_bedtime_entry = 41,
  sym_slept_entry = 42,
  sym_wakeup_entry = 43,
  sym_nap_entry = 44,
  sym_time_range = 45,
  sym_time = 46,
  sym_ordinal = 47,
  sym_comment = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_entry_list_repeat1 = 50,
  aux_sym__entry_repeat1 = 51,
  aux_sym__entry_repeat2 = 52,
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
  [anon_sym_ish] = "ish",
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
  [anon_sym_ish] = {
    .visible = true,
    .named = false,
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
      if (lookahead == 0) ADVANCE(56);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '3') ADVANCE(72);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(9);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 8211) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(56);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(9);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 8211) ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(39);
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
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Jan);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Feb);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Mar);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Apr);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Jun);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Jul);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Aug);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Sep);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Sept);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Oct);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Nov);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Dec);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_date_day);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_date_day);
      if (lookahead == 'n') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_date_day);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_date_day);
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(70);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_date_day);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_date_day);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Bedtime_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Slept);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Wakeup_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_nap_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_time_hour);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_time_hour);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_time_minute);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_time_separator);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ish);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_am_specifier);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_pm_specifier);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_1st);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_2nd);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_3rd);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_ordinal_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(95);
      END_STATE();
    case 96:
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 94},
  [54] = {-1},
  [55] = {.lex_state = 0},
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
    [anon_sym_ish] = ACTIONS(1),
    [sym_am_specifier] = ACTIONS(1),
    [sym_pm_specifier] = ACTIONS(1),
    [anon_sym_1st] = ACTIONS(1),
    [anon_sym_2nd] = ACTIONS(1),
    [anon_sym_3rd] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_sleep_note] = STATE(19),
    [sym_date_range] = STATE(29),
    [sym_short_month] = STATE(47),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    [anon_sym_ish] = ACTIONS(17),
    [sym_am_specifier] = ACTIONS(19),
    [sym_pm_specifier] = ACTIONS(19),
    [anon_sym_1st] = ACTIONS(11),
    [anon_sym_2nd] = ACTIONS(11),
    [anon_sym_3rd] = ACTIONS(11),
    [aux_sym_ordinal_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_Jan] = ACTIONS(21),
    [anon_sym_Feb] = ACTIONS(21),
    [anon_sym_Mar] = ACTIONS(21),
    [anon_sym_Apr] = ACTIONS(21),
    [anon_sym_May] = ACTIONS(21),
    [anon_sym_Jun] = ACTIONS(21),
    [anon_sym_Jul] = ACTIONS(21),
    [anon_sym_Aug] = ACTIONS(21),
    [anon_sym_Sep] = ACTIONS(23),
    [anon_sym_Sept] = ACTIONS(21),
    [anon_sym_Oct] = ACTIONS(21),
    [anon_sym_Nov] = ACTIONS(21),
    [anon_sym_Dec] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_Bedtime_COLON] = ACTIONS(21),
    [anon_sym_Slept] = ACTIONS(21),
    [anon_sym_Wakeup_COLON] = ACTIONS(21),
    [anon_sym_ish] = ACTIONS(25),
    [sym_am_specifier] = ACTIONS(27),
    [sym_pm_specifier] = ACTIONS(27),
    [anon_sym_1st] = ACTIONS(21),
    [anon_sym_2nd] = ACTIONS(21),
    [anon_sym_3rd] = ACTIONS(21),
    [aux_sym_ordinal_token1] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [4] = {
    [sym_comment] = STATE(4),
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
    [anon_sym_ish] = ACTIONS(33),
    [anon_sym_1st] = ACTIONS(29),
    [anon_sym_2nd] = ACTIONS(29),
    [anon_sym_3rd] = ACTIONS(29),
    [aux_sym_ordinal_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_Jan] = ACTIONS(35),
    [anon_sym_Feb] = ACTIONS(35),
    [anon_sym_Mar] = ACTIONS(35),
    [anon_sym_Apr] = ACTIONS(35),
    [anon_sym_May] = ACTIONS(35),
    [anon_sym_Jun] = ACTIONS(35),
    [anon_sym_Jul] = ACTIONS(35),
    [anon_sym_Aug] = ACTIONS(35),
    [anon_sym_Sep] = ACTIONS(37),
    [anon_sym_Sept] = ACTIONS(35),
    [anon_sym_Oct] = ACTIONS(35),
    [anon_sym_Nov] = ACTIONS(35),
    [anon_sym_Dec] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_] = ACTIONS(35),
    [anon_sym_Bedtime_COLON] = ACTIONS(35),
    [anon_sym_Slept] = ACTIONS(35),
    [anon_sym_Wakeup_COLON] = ACTIONS(35),
    [anon_sym_ish] = ACTIONS(39),
    [anon_sym_1st] = ACTIONS(35),
    [anon_sym_2nd] = ACTIONS(35),
    [anon_sym_3rd] = ACTIONS(35),
    [aux_sym_ordinal_token1] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_Jan] = ACTIONS(21),
    [anon_sym_Feb] = ACTIONS(21),
    [anon_sym_Mar] = ACTIONS(21),
    [anon_sym_Apr] = ACTIONS(21),
    [anon_sym_May] = ACTIONS(21),
    [anon_sym_Jun] = ACTIONS(21),
    [anon_sym_Jul] = ACTIONS(21),
    [anon_sym_Aug] = ACTIONS(21),
    [anon_sym_Sep] = ACTIONS(23),
    [anon_sym_Sept] = ACTIONS(21),
    [anon_sym_Oct] = ACTIONS(21),
    [anon_sym_Nov] = ACTIONS(21),
    [anon_sym_Dec] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_Bedtime_COLON] = ACTIONS(21),
    [anon_sym_Slept] = ACTIONS(21),
    [anon_sym_Wakeup_COLON] = ACTIONS(21),
    [anon_sym_1st] = ACTIONS(21),
    [anon_sym_2nd] = ACTIONS(21),
    [anon_sym_3rd] = ACTIONS(21),
    [aux_sym_ordinal_token1] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_Jan] = ACTIONS(35),
    [anon_sym_Feb] = ACTIONS(35),
    [anon_sym_Mar] = ACTIONS(35),
    [anon_sym_Apr] = ACTIONS(35),
    [anon_sym_May] = ACTIONS(35),
    [anon_sym_Jun] = ACTIONS(35),
    [anon_sym_Jul] = ACTIONS(35),
    [anon_sym_Aug] = ACTIONS(35),
    [anon_sym_Sep] = ACTIONS(37),
    [anon_sym_Sept] = ACTIONS(35),
    [anon_sym_Oct] = ACTIONS(35),
    [anon_sym_Nov] = ACTIONS(35),
    [anon_sym_Dec] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_] = ACTIONS(35),
    [anon_sym_Bedtime_COLON] = ACTIONS(35),
    [anon_sym_Slept] = ACTIONS(35),
    [anon_sym_Wakeup_COLON] = ACTIONS(35),
    [anon_sym_1st] = ACTIONS(35),
    [anon_sym_2nd] = ACTIONS(35),
    [anon_sym_3rd] = ACTIONS(35),
    [aux_sym_ordinal_token1] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [8] = {
    [sym_comment] = STATE(8),
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
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_Jan] = ACTIONS(41),
    [anon_sym_Feb] = ACTIONS(41),
    [anon_sym_Mar] = ACTIONS(41),
    [anon_sym_Apr] = ACTIONS(41),
    [anon_sym_May] = ACTIONS(41),
    [anon_sym_Jun] = ACTIONS(41),
    [anon_sym_Jul] = ACTIONS(41),
    [anon_sym_Aug] = ACTIONS(41),
    [anon_sym_Sep] = ACTIONS(43),
    [anon_sym_Sept] = ACTIONS(41),
    [anon_sym_Oct] = ACTIONS(41),
    [anon_sym_Nov] = ACTIONS(41),
    [anon_sym_Dec] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_] = ACTIONS(41),
    [anon_sym_Bedtime_COLON] = ACTIONS(41),
    [anon_sym_Slept] = ACTIONS(41),
    [anon_sym_Wakeup_COLON] = ACTIONS(41),
    [anon_sym_1st] = ACTIONS(41),
    [anon_sym_2nd] = ACTIONS(41),
    [anon_sym_3rd] = ACTIONS(41),
    [aux_sym_ordinal_token1] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [10] = {
    [sym_sleep_note] = STATE(19),
    [sym_date_range] = STATE(29),
    [sym_short_month] = STATE(47),
    [sym_comment] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(45),
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
  [11] = {
    [sym__entry] = STATE(16),
    [sym_bedtime_entry] = STATE(27),
    [sym_comment] = STATE(11),
    [aux_sym_entry_list_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_Jan] = ACTIONS(47),
    [anon_sym_Feb] = ACTIONS(47),
    [anon_sym_Mar] = ACTIONS(47),
    [anon_sym_Apr] = ACTIONS(47),
    [anon_sym_May] = ACTIONS(47),
    [anon_sym_Jun] = ACTIONS(47),
    [anon_sym_Jul] = ACTIONS(47),
    [anon_sym_Aug] = ACTIONS(47),
    [anon_sym_Sep] = ACTIONS(49),
    [anon_sym_Sept] = ACTIONS(47),
    [anon_sym_Oct] = ACTIONS(47),
    [anon_sym_Nov] = ACTIONS(47),
    [anon_sym_Dec] = ACTIONS(47),
    [anon_sym_Bedtime_COLON] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [12] = {
    [sym_sleep_note] = STATE(19),
    [sym_date_range] = STATE(29),
    [sym_short_month] = STATE(47),
    [sym_comment] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_Jan] = ACTIONS(56),
    [anon_sym_Feb] = ACTIONS(56),
    [anon_sym_Mar] = ACTIONS(56),
    [anon_sym_Apr] = ACTIONS(56),
    [anon_sym_May] = ACTIONS(56),
    [anon_sym_Jun] = ACTIONS(56),
    [anon_sym_Jul] = ACTIONS(56),
    [anon_sym_Aug] = ACTIONS(56),
    [anon_sym_Sep] = ACTIONS(59),
    [anon_sym_Sept] = ACTIONS(56),
    [anon_sym_Oct] = ACTIONS(56),
    [anon_sym_Nov] = ACTIONS(56),
    [anon_sym_Dec] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [13] = {
    [sym__entry] = STATE(16),
    [sym_bedtime_entry] = STATE(27),
    [sym_comment] = STATE(13),
    [aux_sym_entry_list_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_Jan] = ACTIONS(62),
    [anon_sym_Feb] = ACTIONS(62),
    [anon_sym_Mar] = ACTIONS(62),
    [anon_sym_Apr] = ACTIONS(62),
    [anon_sym_May] = ACTIONS(62),
    [anon_sym_Jun] = ACTIONS(62),
    [anon_sym_Jul] = ACTIONS(62),
    [anon_sym_Aug] = ACTIONS(62),
    [anon_sym_Sep] = ACTIONS(64),
    [anon_sym_Sept] = ACTIONS(62),
    [anon_sym_Oct] = ACTIONS(62),
    [anon_sym_Nov] = ACTIONS(62),
    [anon_sym_Dec] = ACTIONS(62),
    [anon_sym_Bedtime_COLON] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [14] = {
    [sym_comment] = STATE(14),
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
    [anon_sym_Slept] = ACTIONS(68),
    [anon_sym_Wakeup_COLON] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = STATE(15),
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
  [16] = {
    [sym_comment] = STATE(16),
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
    [anon_sym_Bedtime_COLON] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [17] = {
    [sym_comment] = STATE(17),
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
    [anon_sym_Bedtime_COLON] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_Jan] = ACTIONS(84),
    [anon_sym_Feb] = ACTIONS(84),
    [anon_sym_Mar] = ACTIONS(84),
    [anon_sym_Apr] = ACTIONS(84),
    [anon_sym_May] = ACTIONS(84),
    [anon_sym_Jun] = ACTIONS(84),
    [anon_sym_Jul] = ACTIONS(84),
    [anon_sym_Aug] = ACTIONS(84),
    [anon_sym_Sep] = ACTIONS(86),
    [anon_sym_Sept] = ACTIONS(84),
    [anon_sym_Oct] = ACTIONS(84),
    [anon_sym_Nov] = ACTIONS(84),
    [anon_sym_Dec] = ACTIONS(84),
    [anon_sym_Bedtime_COLON] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_Jan] = ACTIONS(88),
    [anon_sym_Feb] = ACTIONS(88),
    [anon_sym_Mar] = ACTIONS(88),
    [anon_sym_Apr] = ACTIONS(88),
    [anon_sym_May] = ACTIONS(88),
    [anon_sym_Jun] = ACTIONS(88),
    [anon_sym_Jul] = ACTIONS(88),
    [anon_sym_Aug] = ACTIONS(88),
    [anon_sym_Sep] = ACTIONS(90),
    [anon_sym_Sept] = ACTIONS(88),
    [anon_sym_Oct] = ACTIONS(88),
    [anon_sym_Nov] = ACTIONS(88),
    [anon_sym_Dec] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_Jan] = ACTIONS(92),
    [anon_sym_Feb] = ACTIONS(92),
    [anon_sym_Mar] = ACTIONS(92),
    [anon_sym_Apr] = ACTIONS(92),
    [anon_sym_May] = ACTIONS(92),
    [anon_sym_Jun] = ACTIONS(92),
    [anon_sym_Jul] = ACTIONS(92),
    [anon_sym_Aug] = ACTIONS(92),
    [anon_sym_Sep] = ACTIONS(94),
    [anon_sym_Sept] = ACTIONS(92),
    [anon_sym_Oct] = ACTIONS(92),
    [anon_sym_Nov] = ACTIONS(92),
    [anon_sym_Dec] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [21] = {
    [sym_bedtime_entry] = STATE(15),
    [sym_nap_entry] = STATE(31),
    [sym_ordinal] = STATE(45),
    [sym_comment] = STATE(21),
    [aux_sym__entry_repeat2] = STATE(25),
    [anon_sym_Bedtime_COLON] = ACTIONS(66),
    [anon_sym_1st] = ACTIONS(96),
    [anon_sym_2nd] = ACTIONS(96),
    [anon_sym_3rd] = ACTIONS(96),
    [aux_sym_ordinal_token1] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [22] = {
    [sym_bedtime_entry] = STATE(17),
    [sym_nap_entry] = STATE(31),
    [sym_ordinal] = STATE(45),
    [sym_comment] = STATE(22),
    [aux_sym__entry_repeat2] = STATE(21),
    [anon_sym_Bedtime_COLON] = ACTIONS(66),
    [anon_sym_1st] = ACTIONS(96),
    [anon_sym_2nd] = ACTIONS(96),
    [anon_sym_3rd] = ACTIONS(96),
    [aux_sym_ordinal_token1] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [23] = {
    [sym_bedtime_entry] = STATE(17),
    [sym_nap_entry] = STATE(31),
    [sym_ordinal] = STATE(45),
    [sym_comment] = STATE(23),
    [aux_sym__entry_repeat2] = STATE(25),
    [anon_sym_Bedtime_COLON] = ACTIONS(66),
    [anon_sym_1st] = ACTIONS(96),
    [anon_sym_2nd] = ACTIONS(96),
    [anon_sym_3rd] = ACTIONS(96),
    [aux_sym_ordinal_token1] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [24] = {
    [sym_bedtime_entry] = STATE(18),
    [sym_nap_entry] = STATE(31),
    [sym_ordinal] = STATE(45),
    [sym_comment] = STATE(24),
    [aux_sym__entry_repeat2] = STATE(23),
    [anon_sym_Bedtime_COLON] = ACTIONS(66),
    [anon_sym_1st] = ACTIONS(96),
    [anon_sym_2nd] = ACTIONS(96),
    [anon_sym_3rd] = ACTIONS(96),
    [aux_sym_ordinal_token1] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [25] = {
    [sym_nap_entry] = STATE(31),
    [sym_ordinal] = STATE(45),
    [sym_comment] = STATE(25),
    [aux_sym__entry_repeat2] = STATE(25),
    [anon_sym_Bedtime_COLON] = ACTIONS(98),
    [anon_sym_1st] = ACTIONS(100),
    [anon_sym_2nd] = ACTIONS(100),
    [anon_sym_3rd] = ACTIONS(100),
    [aux_sym_ordinal_token1] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [anon_sym_Bedtime_COLON] = ACTIONS(103),
    [anon_sym_Slept] = ACTIONS(103),
    [anon_sym_Wakeup_COLON] = ACTIONS(103),
    [anon_sym_1st] = ACTIONS(103),
    [anon_sym_2nd] = ACTIONS(103),
    [anon_sym_3rd] = ACTIONS(103),
    [aux_sym_ordinal_token1] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [27] = {
    [sym_slept_entry] = STATE(41),
    [sym_wakeup_entry] = STATE(24),
    [sym_comment] = STATE(27),
    [aux_sym__entry_repeat1] = STATE(32),
    [anon_sym_Slept] = ACTIONS(105),
    [anon_sym_Wakeup_COLON] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [anon_sym_Bedtime_COLON] = ACTIONS(109),
    [anon_sym_1st] = ACTIONS(109),
    [anon_sym_2nd] = ACTIONS(109),
    [anon_sym_3rd] = ACTIONS(109),
    [aux_sym_ordinal_token1] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [29] = {
    [sym_entry_list] = STATE(20),
    [sym__entry] = STATE(16),
    [sym_bedtime_entry] = STATE(27),
    [sym_comment] = STATE(29),
    [aux_sym_entry_list_repeat1] = STATE(13),
    [anon_sym_Bedtime_COLON] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [anon_sym_Bedtime_COLON] = ACTIONS(111),
    [anon_sym_1st] = ACTIONS(111),
    [anon_sym_2nd] = ACTIONS(111),
    [anon_sym_3rd] = ACTIONS(111),
    [aux_sym_ordinal_token1] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [31] = {
    [sym_comment] = STATE(31),
    [anon_sym_Bedtime_COLON] = ACTIONS(113),
    [anon_sym_1st] = ACTIONS(113),
    [anon_sym_2nd] = ACTIONS(113),
    [anon_sym_3rd] = ACTIONS(113),
    [aux_sym_ordinal_token1] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [32] = {
    [sym_slept_entry] = STATE(41),
    [sym_wakeup_entry] = STATE(22),
    [sym_comment] = STATE(32),
    [aux_sym__entry_repeat1] = STATE(33),
    [anon_sym_Slept] = ACTIONS(105),
    [anon_sym_Wakeup_COLON] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [33] = {
    [sym_slept_entry] = STATE(41),
    [sym_comment] = STATE(33),
    [aux_sym__entry_repeat1] = STATE(33),
    [anon_sym_Slept] = ACTIONS(115),
    [anon_sym_Wakeup_COLON] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [34] = {
    [sym_range_specifier] = STATE(38),
    [sym_comment] = STATE(34),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [35] = {
    [sym_range_specifier] = STATE(49),
    [sym_comment] = STATE(35),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [36] = {
    [sym_time_range] = STATE(28),
    [sym_time] = STATE(34),
    [sym_comment] = STATE(36),
    [sym_time_hour] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [37] = {
    [sym_time_range] = STATE(39),
    [sym_time] = STATE(34),
    [sym_comment] = STATE(37),
    [sym_time_hour] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [38] = {
    [sym_time] = STATE(26),
    [sym_comment] = STATE(38),
    [sym_time_hour] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [39] = {
    [sym_comment] = STATE(39),
    [anon_sym_Slept] = ACTIONS(126),
    [anon_sym_Wakeup_COLON] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [40] = {
    [sym_time] = STATE(14),
    [sym_comment] = STATE(40),
    [sym_time_hour] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [41] = {
    [sym_comment] = STATE(41),
    [anon_sym_Slept] = ACTIONS(128),
    [anon_sym_Wakeup_COLON] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [42] = {
    [sym_time] = STATE(30),
    [sym_comment] = STATE(42),
    [sym_time_hour] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [43] = {
    [sym_comment] = STATE(43),
    [sym_date_day] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [44] = {
    [sym_comment] = STATE(44),
    [anon_sym_Bedtime_COLON] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [45] = {
    [sym_comment] = STATE(45),
    [anon_sym_nap_COLON] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [46] = {
    [sym_comment] = STATE(46),
    [sym_time_minute] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [47] = {
    [sym_comment] = STATE(47),
    [sym_date_day] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [48] = {
    [sym_comment] = STATE(48),
    [anon_sym_nap_COLON] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [49] = {
    [sym_comment] = STATE(49),
    [sym_date_day] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [50] = {
    [sym_comment] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [51] = {
    [sym_comment] = STATE(51),
    [sym_date_day] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [52] = {
    [sym_comment] = STATE(52),
    [sym_time_hour] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [53] = {
    [aux_sym_comment_token1] = ACTIONS(148),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(150),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(152),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(53),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(51),
  [9] = {.count = 1, .reusable = false}, SHIFT(51),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_time, 1),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_time, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(46),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(5),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_time, 3),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_time, 3),
  [25] = {.count = 1, .reusable = true}, SHIFT(8),
  [27] = {.count = 1, .reusable = true}, SHIFT(4),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_time, 4),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_time, 4),
  [33] = {.count = 1, .reusable = true}, SHIFT(9),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_time, 2),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_time, 2),
  [39] = {.count = 1, .reusable = true}, SHIFT(6),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_time, 5),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_time, 5),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_list_repeat1, 2),
  [49] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_list_repeat1, 2),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_list_repeat1, 2), SHIFT_REPEAT(40),
  [54] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_entry_list, 1),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_entry_list, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(40),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_bedtime_entry, 2),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_bedtime_entry, 2),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym__entry, 5),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym__entry, 5),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_list_repeat1, 1),
  [78] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_list_repeat1, 1),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__entry, 4),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym__entry, 4),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym__entry, 3),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym__entry, 3),
  [88] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_sleep_note, 2),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_sleep_note, 2),
  [96] = {.count = 1, .reusable = true}, SHIFT(48),
  [98] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entry_repeat2, 2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym__entry_repeat2, 2), SHIFT_REPEAT(48),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_time_range, 3),
  [105] = {.count = 1, .reusable = true}, SHIFT(37),
  [107] = {.count = 1, .reusable = true}, SHIFT(42),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_nap_entry, 3),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_wakeup_entry, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entry_repeat2, 1),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym__entry_repeat1, 2), SHIFT_REPEAT(37),
  [118] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entry_repeat1, 2),
  [120] = {.count = 1, .reusable = true}, SHIFT(52),
  [122] = {.count = 1, .reusable = true}, SHIFT(43),
  [124] = {.count = 1, .reusable = true}, SHIFT(2),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_slept_entry, 2),
  [128] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entry_repeat1, 1),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_range_specifier, 1),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_date_range, 4),
  [134] = {.count = 1, .reusable = true}, SHIFT(36),
  [136] = {.count = 1, .reusable = true}, SHIFT(3),
  [138] = {.count = 1, .reusable = true}, SHIFT(35),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_ordinal, 1),
  [142] = {.count = 1, .reusable = true}, SHIFT(44),
  [144] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_short_month, 1),
  [148] = {.count = 1, .reusable = true}, SHIFT(55),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [152] = {.count = 1, .reusable = true}, SHIFT(54),
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
