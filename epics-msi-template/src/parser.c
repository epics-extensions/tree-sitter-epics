#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_DOLLAR_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_DOLLAR_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_EQ = 5,
  anon_sym_COMMA = 6,
  aux_sym_variable_token1 = 7,
  aux_sym_string_token1 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_quoted_string_text_fragment_token1 = 10,
  anon_sym_BSLASH = 11,
  anon_sym_BSLASH_DQUOTE = 12,
  anon_sym_BSLASH_BSLASH = 13,
  sym_macro_expansion = 14,
  sym__macro_expansion_inner = 15,
  sym_variable = 16,
  sym_override = 17,
  sym_string = 18,
  sym_quoted_string = 19,
  sym_quoted_string_text_fragment = 20,
  sym_escape_sequence = 21,
  aux_sym__macro_expansion_inner_repeat1 = 22,
  aux_sym_variable_repeat1 = 23,
  aux_sym_string_repeat1 = 24,
  aux_sym_quoted_string_repeat1 = 25,
  aux_sym_quoted_string_text_fragment_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_text_fragment_token1] = "quoted_string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [sym_macro_expansion] = "macro_expansion",
  [sym__macro_expansion_inner] = "_macro_expansion_inner",
  [sym_variable] = "variable",
  [sym_override] = "override",
  [sym_string] = "string",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_string_text_fragment] = "quoted_string_text_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym__macro_expansion_inner_repeat1] = "_macro_expansion_inner_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_text_fragment_token1] = aux_sym_quoted_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [sym_macro_expansion] = sym_macro_expansion,
  [sym__macro_expansion_inner] = sym__macro_expansion_inner,
  [sym_variable] = sym_variable,
  [sym_override] = sym_override,
  [sym_string] = sym_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_string_text_fragment] = sym_quoted_string_text_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym__macro_expansion_inner_repeat1] = aux_sym__macro_expansion_inner_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
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
  [sym_override] = {
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
  [aux_sym__macro_expansion_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
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
  field_overrides = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
  [field_overrides] = "overrides",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_default, 1, .inherited = true},
    {field_overrides, 1, .inherited = true},
  [2] =
    {field_overrides, 1},
  [3] =
    {field_default, 2},
  [4] =
    {field_default, 2},
    {field_overrides, 3},
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
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '{') ADVANCE(8);
      END_STATE();
    case 4:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_macro_expansion] = STATE(37),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(3),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(17), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(3), 4,
      sym_macro_expansion,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [29] = 8,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(17), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(4), 4,
      sym_macro_expansion,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [58] = 8,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(24), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(32), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(35), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(4), 4,
      sym_macro_expansion,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [87] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(40), 1,
      aux_sym_variable_token1,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
    ACTIONS(38), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [107] = 5,
    ACTIONS(42), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(50), 1,
      aux_sym_variable_token1,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
    ACTIONS(45), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [127] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(61), 1,
      aux_sym_string_token1,
    STATE(7), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
    ACTIONS(56), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [146] = 7,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(68), 1,
      aux_sym_string_token1,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(36), 1,
      sym_quoted_string,
    STATE(13), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
  [169] = 5,
    ACTIONS(74), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(76), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(78), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(72), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [188] = 5,
    ACTIONS(82), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(88), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(80), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [207] = 1,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_variable_token1,
  [218] = 7,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(68), 1,
      aux_sym_string_token1,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
    STATE(36), 1,
      sym_quoted_string,
    STATE(13), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
  [241] = 5,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(94), 1,
      aux_sym_string_token1,
    STATE(7), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
    ACTIONS(92), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [260] = 1,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_variable_token1,
  [271] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(96), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(40), 1,
      sym__macro_expansion_inner,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [291] = 2,
    ACTIONS(90), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(98), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [303] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(96), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(44), 1,
      sym__macro_expansion_inner,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [323] = 2,
    ACTIONS(90), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(98), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [335] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(96), 1,
      aux_sym_variable_token1,
    STATE(34), 1,
      sym_override,
    STATE(38), 1,
      sym_variable,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [355] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(96), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(39), 1,
      sym__macro_expansion_inner,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [375] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(96), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(41), 1,
      sym__macro_expansion_inner,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [395] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(96), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(42), 1,
      sym__macro_expansion_inner,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [415] = 2,
    ACTIONS(102), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(100), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [427] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(96), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(43), 1,
      sym__macro_expansion_inner,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [447] = 1,
    ACTIONS(90), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_string_token1,
  [456] = 1,
    ACTIONS(90), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_string_token1,
  [465] = 4,
    ACTIONS(106), 1,
      anon_sym_EQ,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [479] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [490] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(112), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [501] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(117), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [512] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(119), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [523] = 1,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [529] = 1,
    ACTIONS(123), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [535] = 1,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [541] = 1,
    ACTIONS(125), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [547] = 1,
    ACTIONS(92), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [553] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [557] = 1,
    ACTIONS(129), 1,
      anon_sym_EQ,
  [561] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
  [565] = 1,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
  [569] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
  [573] = 1,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
  [577] = 1,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
  [581] = 1,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 303,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 335,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 375,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 415,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 447,
  [SMALL_STATE(26)] = 456,
  [SMALL_STATE(27)] = 465,
  [SMALL_STATE(28)] = 479,
  [SMALL_STATE(29)] = 490,
  [SMALL_STATE(30)] = 501,
  [SMALL_STATE(31)] = 512,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 529,
  [SMALL_STATE(34)] = 535,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 547,
  [SMALL_STATE(37)] = 553,
  [SMALL_STATE(38)] = 557,
  [SMALL_STATE(39)] = 561,
  [SMALL_STATE(40)] = 565,
  [SMALL_STATE(41)] = 569,
  [SMALL_STATE(42)] = 573,
  [SMALL_STATE(43)] = 577,
  [SMALL_STATE(44)] = 581,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(21),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(24),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(15),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text_fragment, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_text_fragment, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(10),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expansion, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 4, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_expansion_inner_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macro_expansion_inner_repeat1, 2), SHIFT_REPEAT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 3, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 2, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override, 3),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
