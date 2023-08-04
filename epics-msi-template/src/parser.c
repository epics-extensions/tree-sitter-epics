#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_DOLLAR_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_DOLLAR_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_EQ = 5,
  aux_sym_variable_token1 = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_quoted_string_text_fragment_token1 = 8,
  anon_sym_BSLASH = 9,
  anon_sym_BSLASH_DQUOTE = 10,
  anon_sym_BSLASH_BSLASH = 11,
  sym_macro_expansion = 12,
  sym__macro_expansion_inner = 13,
  sym_variable = 14,
  sym_string = 15,
  sym_quoted_string = 16,
  sym_quoted_string_text_fragment = 17,
  sym_escape_sequence = 18,
  aux_sym_string_repeat1 = 19,
  aux_sym_quoted_string_repeat1 = 20,
  aux_sym_quoted_string_text_fragment_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_text_fragment_token1] = "quoted_string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [sym_macro_expansion] = "macro_expansion",
  [sym__macro_expansion_inner] = "_macro_expansion_inner",
  [sym_variable] = "variable",
  [sym_string] = "string",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_string_text_fragment] = "quoted_string_text_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_quoted_string_text_fragment_repeat1] = "quoted_string_text_fragment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_text_fragment_token1] = aux_sym_quoted_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [sym_macro_expansion] = sym_macro_expansion,
  [sym__macro_expansion_inner] = sym__macro_expansion_inner,
  [sym_variable] = sym_variable,
  [sym_string] = sym_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_string_text_fragment] = sym_quoted_string_text_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_quoted_string_text_fragment_repeat1] = aux_sym_quoted_string_text_fragment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_expansion_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
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
  [sym_quoted_string_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_default = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_default, 1, .inherited = true},
  [1] =
    {field_default, 2},
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
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '{') ADVANCE(5);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_macro_expansion] = STATE(25),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(3),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
  },
  [2] = {
    [sym_macro_expansion] = STATE(3),
    [sym_quoted_string_text_fragment] = STATE(3),
    [sym_escape_sequence] = STATE(3),
    [aux_sym_quoted_string_repeat1] = STATE(3),
    [aux_sym_quoted_string_text_fragment_repeat1] = STATE(6),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(7),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_quoted_string_text_fragment_token1] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(17),
  },
  [3] = {
    [sym_macro_expansion] = STATE(3),
    [sym_quoted_string_text_fragment] = STATE(3),
    [sym_escape_sequence] = STATE(3),
    [aux_sym_quoted_string_repeat1] = STATE(3),
    [aux_sym_quoted_string_text_fragment_repeat1] = STATE(6),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_quoted_string_text_fragment_token1] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(33),
  },
  [4] = {
    [sym_macro_expansion] = STATE(2),
    [sym_quoted_string_text_fragment] = STATE(2),
    [sym_escape_sequence] = STATE(2),
    [aux_sym_quoted_string_repeat1] = STATE(2),
    [aux_sym_quoted_string_text_fragment_repeat1] = STATE(6),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(7),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [aux_sym_quoted_string_text_fragment_token1] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(38), 1,
      aux_sym_variable_token1,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_quoted_string,
    STATE(24), 1,
      sym_string,
    STATE(8), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
  [23] = 5,
    ACTIONS(44), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(46), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(48), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(42), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [42] = 5,
    ACTIONS(52), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(58), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(50), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [61] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      aux_sym_variable_token1,
    ACTIONS(60), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
  [79] = 2,
    ACTIONS(66), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(64), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [91] = 2,
    ACTIONS(66), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(64), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [103] = 2,
    ACTIONS(70), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(68), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [115] = 5,
    ACTIONS(72), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(80), 1,
      aux_sym_variable_token1,
    ACTIONS(75), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
  [133] = 1,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      aux_sym_variable_token1,
  [142] = 1,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      aux_sym_variable_token1,
  [151] = 3,
    ACTIONS(83), 1,
      aux_sym_variable_token1,
    STATE(16), 1,
      sym_variable,
    STATE(29), 1,
      sym__macro_expansion_inner,
  [161] = 2,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [169] = 3,
    ACTIONS(83), 1,
      aux_sym_variable_token1,
    STATE(16), 1,
      sym_variable,
    STATE(26), 1,
      sym__macro_expansion_inner,
  [179] = 1,
    ACTIONS(89), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [185] = 3,
    ACTIONS(83), 1,
      aux_sym_variable_token1,
    STATE(16), 1,
      sym_variable,
    STATE(27), 1,
      sym__macro_expansion_inner,
  [195] = 3,
    ACTIONS(83), 1,
      aux_sym_variable_token1,
    STATE(16), 1,
      sym_variable,
    STATE(28), 1,
      sym__macro_expansion_inner,
  [205] = 1,
    ACTIONS(60), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [210] = 1,
    ACTIONS(91), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [215] = 1,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [220] = 1,
    ACTIONS(95), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [225] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [229] = 1,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
  [233] = 1,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [237] = 1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [241] = 1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 23,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 91,
  [SMALL_STATE(11)] = 103,
  [SMALL_STATE(12)] = 115,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 151,
  [SMALL_STATE(16)] = 161,
  [SMALL_STATE(17)] = 169,
  [SMALL_STATE(18)] = 179,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 195,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 215,
  [SMALL_STATE(24)] = 220,
  [SMALL_STATE(25)] = 225,
  [SMALL_STATE(26)] = 229,
  [SMALL_STATE(27)] = 233,
  [SMALL_STATE(28)] = 237,
  [SMALL_STATE(29)] = 241,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(17),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text_fragment, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_text_fragment, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expansion, 3, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epics_msi_template(void) {
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
