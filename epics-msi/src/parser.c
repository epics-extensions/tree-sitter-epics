#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACE = 5,
  anon_sym_EQ = 6,
  anon_sym_pattern = 7,
  anon_sym_file = 8,
  aux_sym_string_token1 = 9,
  anon_sym_DQUOTE = 10,
  sym_quoted_string_text_fragment = 11,
  sym_escape_sequence = 12,
  sym_source_file = 13,
  sym_comment = 14,
  sym_regular = 15,
  sym__regular_assignment = 16,
  sym_pattern = 17,
  sym_pattern_variables = 18,
  sym_pattern_values = 19,
  sym_db_template = 20,
  sym_substitutions = 21,
  sym_string = 22,
  sym_quoted_string = 23,
  sym_identifier = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_source_file_repeat2 = 26,
  aux_sym_source_file_repeat3 = 27,
  aux_sym_regular_repeat1 = 28,
  aux_sym_pattern_repeat1 = 29,
  aux_sym_pattern_variables_repeat1 = 30,
  aux_sym_pattern_values_repeat1 = 31,
  aux_sym_quoted_string_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_pattern] = "pattern",
  [anon_sym_file] = "file",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_quoted_string_text_fragment] = "quoted_string_text_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_regular] = "regular",
  [sym__regular_assignment] = "_regular_assignment",
  [sym_pattern] = "pattern",
  [sym_pattern_variables] = "pattern_variables",
  [sym_pattern_values] = "pattern_values",
  [sym_db_template] = "db_template",
  [sym_substitutions] = "substitutions",
  [sym_string] = "string",
  [sym_quoted_string] = "quoted_string",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_regular_repeat1] = "regular_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_pattern_variables_repeat1] = "pattern_variables_repeat1",
  [aux_sym_pattern_values_repeat1] = "pattern_values_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_file] = anon_sym_file,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_quoted_string_text_fragment] = sym_quoted_string_text_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_regular] = sym_regular,
  [sym__regular_assignment] = sym__regular_assignment,
  [sym_pattern] = sym_pattern,
  [sym_pattern_variables] = sym_pattern_variables,
  [sym_pattern_values] = sym_pattern_values,
  [sym_db_template] = sym_db_template,
  [sym_substitutions] = sym_substitutions,
  [sym_string] = sym_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_regular_repeat1] = aux_sym_regular_repeat1,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_pattern_variables_repeat1] = aux_sym_pattern_variables_repeat1,
  [aux_sym_pattern_values_repeat1] = aux_sym_pattern_values_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_regular] = {
    .visible = true,
    .named = true,
  },
  [sym__regular_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_values] = {
    .visible = true,
    .named = true,
  },
  [sym_db_template] = {
    .visible = true,
    .named = true,
  },
  [sym_substitutions] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regular_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_file = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file] = "file",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_file, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_quoted_string_text_fragment);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_quoted_string_text_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_comment] = STATE(1),
    [sym_regular] = STATE(45),
    [sym_pattern] = STATE(44),
    [sym_db_template] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(36),
    [aux_sym_source_file_repeat2] = STATE(30),
    [aux_sym_source_file_repeat3] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_pattern] = ACTIONS(9),
    [anon_sym_file] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_pattern,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      aux_sym_source_file_repeat2,
    STATE(44), 1,
      sym_pattern,
    STATE(45), 1,
      sym_regular,
  [28] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      aux_sym_string_token1,
    ACTIONS(20), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_quoted_string,
    STATE(17), 1,
      sym_string,
    STATE(3), 2,
      sym_comment,
      aux_sym_pattern_values_repeat1,
  [51] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_pattern_repeat1,
    STATE(34), 1,
      sym_pattern_values,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [72] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      aux_sym_string_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_pattern_values_repeat1,
    STATE(10), 1,
      sym_quoted_string,
    STATE(17), 1,
      sym_string,
  [97] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      aux_sym_pattern_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(34), 1,
      sym_pattern_values,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [118] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_pattern_values,
    STATE(7), 2,
      sym_comment,
      aux_sym_pattern_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [137] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_string_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_pattern_values_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      sym_quoted_string,
    STATE(17), 1,
      sym_string,
  [162] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      aux_sym_string_token1,
    STATE(9), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_regular_repeat1,
    STATE(42), 1,
      sym__regular_assignment,
    STATE(56), 1,
      sym_identifier,
  [184] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(46), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
  [198] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(48), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
  [212] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(50), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
  [226] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      aux_sym_string_token1,
    STATE(42), 1,
      sym__regular_assignment,
    STATE(56), 1,
      sym_identifier,
    STATE(13), 2,
      sym_comment,
      aux_sym_regular_repeat1,
  [246] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_pattern,
    STATE(44), 1,
      sym_pattern,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
  [264] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_regular,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [282] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      aux_sym_string_token1,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_regular_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(42), 1,
      sym__regular_assignment,
    STATE(56), 1,
      sym_identifier,
  [304] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_RBRACE,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
  [319] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(73), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
      aux_sym_string_token1,
  [332] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(45), 1,
      sym_regular,
  [351] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [364] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      aux_sym_string_token1,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_pattern_variables_repeat1,
    STATE(39), 1,
      sym_identifier,
  [383] = 6,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_quoted_string_text_fragment,
    ACTIONS(87), 1,
      sym_escape_sequence,
    STATE(22), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_quoted_string_repeat1,
  [402] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      aux_sym_string_token1,
    STATE(39), 1,
      sym_identifier,
    STATE(23), 2,
      sym_comment,
      aux_sym_pattern_variables_repeat1,
  [419] = 5,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_quoted_string_text_fragment,
    ACTIONS(99), 1,
      sym_escape_sequence,
    STATE(24), 2,
      sym_comment,
      aux_sym_quoted_string_repeat1,
  [436] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_file,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_source_file_repeat3,
    STATE(51), 1,
      sym_db_template,
  [455] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_file,
    STATE(51), 1,
      sym_db_template,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat3,
  [472] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [485] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_string_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_quoted_string,
    STATE(28), 1,
      sym_comment,
    STATE(41), 1,
      sym_string,
  [504] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_pattern,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_source_file_repeat2,
    STATE(29), 1,
      sym_comment,
    STATE(44), 1,
      sym_pattern,
  [523] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_pattern,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_source_file_repeat2,
    STATE(30), 1,
      sym_comment,
    STATE(44), 1,
      sym_pattern,
  [542] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [555] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      aux_sym_string_token1,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_pattern_variables_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(39), 1,
      sym_identifier,
  [574] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_string_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_quoted_string,
    STATE(33), 1,
      sym_comment,
    STATE(50), 1,
      sym_string,
  [593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [606] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [619] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(45), 1,
      sym_regular,
  [638] = 6,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_quoted_string_text_fragment,
    ACTIONS(87), 1,
      sym_escape_sequence,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_quoted_string_repeat1,
    STATE(37), 1,
      sym_comment,
  [657] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [669] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_RBRACE,
      aux_sym_string_token1,
  [683] = 4,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      sym_escape_sequence,
    STATE(40), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DQUOTE,
      sym_quoted_string_text_fragment,
  [697] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_string_token1,
  [709] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_RBRACE,
      aux_sym_string_token1,
  [723] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [735] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_pattern,
  [747] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [759] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(15), 3,
      anon_sym_RBRACE,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
  [771] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_file,
  [782] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_RBRACE,
      aux_sym_string_token1,
  [793] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_RBRACE,
      aux_sym_string_token1,
  [804] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_substitutions,
    STATE(50), 1,
      sym_comment,
  [817] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_file,
  [828] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_file,
  [839] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_pattern_variables,
    STATE(53), 1,
      sym_comment,
  [852] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_file,
  [863] = 3,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
  [873] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_comment,
  [883] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [893] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 282,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 319,
  [SMALL_STATE(19)] = 332,
  [SMALL_STATE(20)] = 351,
  [SMALL_STATE(21)] = 364,
  [SMALL_STATE(22)] = 383,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 419,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 472,
  [SMALL_STATE(28)] = 485,
  [SMALL_STATE(29)] = 504,
  [SMALL_STATE(30)] = 523,
  [SMALL_STATE(31)] = 542,
  [SMALL_STATE(32)] = 555,
  [SMALL_STATE(33)] = 574,
  [SMALL_STATE(34)] = 593,
  [SMALL_STATE(35)] = 606,
  [SMALL_STATE(36)] = 619,
  [SMALL_STATE(37)] = 638,
  [SMALL_STATE(38)] = 657,
  [SMALL_STATE(39)] = 669,
  [SMALL_STATE(40)] = 683,
  [SMALL_STATE(41)] = 697,
  [SMALL_STATE(42)] = 709,
  [SMALL_STATE(43)] = 723,
  [SMALL_STATE(44)] = 735,
  [SMALL_STATE(45)] = 747,
  [SMALL_STATE(46)] = 759,
  [SMALL_STATE(47)] = 771,
  [SMALL_STATE(48)] = 782,
  [SMALL_STATE(49)] = 793,
  [SMALL_STATE(50)] = 804,
  [SMALL_STATE(51)] = 817,
  [SMALL_STATE(52)] = 828,
  [SMALL_STATE(53)] = 839,
  [SMALL_STATE(54)] = 852,
  [SMALL_STATE(55)] = 863,
  [SMALL_STATE(56)] = 873,
  [SMALL_STATE(57)] = 883,
  [SMALL_STATE(58)] = 893,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_values_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_values_repeat1, 2), SHIFT_REPEAT(10),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_values_repeat1, 2), SHIFT_REPEAT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regular_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regular_repeat1, 2), SHIFT_REPEAT(18),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(53),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_values_repeat1, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_values, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_variables_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_variables_repeat1, 2), SHIFT_REPEAT(18),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variables, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variables, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_values, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_variables_repeat1, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regular_assignment, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regular_repeat1, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_template, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epics_msi(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
