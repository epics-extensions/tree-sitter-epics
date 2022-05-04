#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
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
  aux_sym_quoted_string_repeat1 = 19,
  aux_sym_quoted_string_text_fragment_repeat1 = 20,
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
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(13);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
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
  [21] = {.lex_state = 0},
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
    [sym_macro_expansion] = STATE(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(3),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(12), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(15), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(2), 3,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [22] = 6,
    ACTIONS(18), 1,
      anon_sym_DQUOTE,
    ACTIONS(20), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(22), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(24), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(2), 3,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [44] = 6,
    ACTIONS(20), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(22), 1,
      anon_sym_BSLASH,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(24), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(3), 3,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [66] = 5,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(33), 1,
      anon_sym_BSLASH,
    STATE(5), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(36), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [83] = 5,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(42), 1,
      anon_sym_BSLASH,
    STATE(5), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(44), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [100] = 2,
    ACTIONS(46), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(48), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [110] = 4,
    ACTIONS(50), 1,
      aux_sym_variable_token1,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_quoted_string,
    STATE(14), 1,
      sym_string,
  [123] = 1,
    ACTIONS(54), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [129] = 3,
    ACTIONS(56), 1,
      aux_sym_variable_token1,
    STATE(11), 1,
      sym_variable,
    STATE(20), 1,
      sym__macro_expansion_inner,
  [139] = 2,
    ACTIONS(60), 1,
      anon_sym_EQ,
    ACTIONS(58), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [147] = 3,
    ACTIONS(56), 1,
      aux_sym_variable_token1,
    STATE(11), 1,
      sym_variable,
    STATE(19), 1,
      sym__macro_expansion_inner,
  [157] = 1,
    ACTIONS(62), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [162] = 1,
    ACTIONS(64), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [167] = 1,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [172] = 1,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [177] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [181] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [185] = 1,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
  [189] = 1,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
  [193] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 162,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 177,
  [SMALL_STATE(18)] = 181,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 189,
  [SMALL_STATE(21)] = 193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text_fragment, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_text_fragment, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 3, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
