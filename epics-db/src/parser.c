#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_record = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  aux_sym_record_type_token1 = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_field = 8,
  anon_sym_POUND = 9,
  aux_sym_comment_token1 = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_BSLASH_DOLLAR = 13,
  aux_sym_string_text_fragment_token1 = 14,
  aux_sym_string_text_fragment2_token1 = 15,
  anon_sym_DOLLAR_LBRACE = 16,
  anon_sym_DOLLAR_LPAREN = 17,
  anon_sym_EQ = 18,
  sym_source_file = 19,
  sym__declaration = 20,
  sym_record = 21,
  sym__record_parameters = 22,
  sym_record_type = 23,
  sym_record_body = 24,
  sym_field = 25,
  sym_comment = 26,
  sym_string = 27,
  sym_string_text_fragment = 28,
  sym_string_text_fragment2 = 29,
  sym_string_expansion = 30,
  sym__string_expansion_inner = 31,
  sym_identifier = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_record_body_repeat1 = 34,
  aux_sym_string_repeat1 = 35,
  aux_sym_string_repeat2 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_record] = "record",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_record_type_token1] = "record_type_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_field] = "field",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_DOLLAR] = "\\$",
  [aux_sym_string_text_fragment_token1] = "string_text_fragment_token1",
  [aux_sym_string_text_fragment2_token1] = "string_text_fragment2_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_EQ] = "=",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_record] = "record",
  [sym__record_parameters] = "_record_parameters",
  [sym_record_type] = "record_type",
  [sym_record_body] = "record_body",
  [sym_field] = "field",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_string_text_fragment] = "string_text_fragment",
  [sym_string_text_fragment2] = "string_text_fragment",
  [sym_string_expansion] = "string_expansion",
  [sym__string_expansion_inner] = "_string_expansion_inner",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_record_body_repeat1] = "record_body_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_record_type_token1] = aux_sym_record_type_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_DOLLAR,
  [aux_sym_string_text_fragment_token1] = aux_sym_string_text_fragment_token1,
  [aux_sym_string_text_fragment2_token1] = aux_sym_string_text_fragment2_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_record] = sym_record,
  [sym__record_parameters] = sym__record_parameters,
  [sym_record_type] = sym_record_type,
  [sym_record_body] = sym_record_body,
  [sym_field] = sym_field,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_string_text_fragment] = sym_string_text_fragment,
  [sym_string_text_fragment2] = sym_string_text_fragment,
  [sym_string_expansion] = sym_string_expansion,
  [sym__string_expansion_inner] = sym__string_expansion_inner,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_record_body_repeat1] = aux_sym_record_body_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_record_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_text_fragment2_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym__record_parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_text_fragment2] = {
    .visible = true,
    .named = true,
  },
  [sym_string_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__string_expansion_inner] = {
    .visible = false,
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
  [aux_sym_record_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_default = 2,
  field_name = 3,
  field_type = 4,
  field_variable = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_default] = "default",
  [field_name] = "name",
  [field_type] = "type",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [3] =
    {field_name, 3},
    {field_type, 1},
  [5] =
    {field_variable, 0},
  [6] =
    {field_default, 1, .inherited = true},
    {field_variable, 1, .inherited = true},
  [8] =
    {field_default, 2},
    {field_variable, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_string_text_fragment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    sym_string_text_fragment,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '{') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_record);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'c') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'd') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'd') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'i') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'l') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'o') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == 'r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_text_fragment2_token1);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_text_fragment2_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_record_type_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym__declaration] = STATE(37),
    [sym_record] = STATE(38),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_record] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(15), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(2), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_string_repeat1,
    STATE(12), 2,
      sym_string_text_fragment,
      sym_string_expansion,
  [29] = 9,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(25), 1,
      aux_sym_string_text_fragment2_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_string_repeat2,
    STATE(17), 2,
      sym_string_text_fragment2,
      sym_string_expansion,
  [58] = 9,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(15), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      aux_sym_string_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(12), 2,
      sym_string_text_fragment,
      sym_string_expansion,
  [87] = 9,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(25), 1,
      aux_sym_string_text_fragment2_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_string_repeat2,
    STATE(17), 2,
      sym_string_text_fragment2,
      sym_string_expansion,
  [116] = 8,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(36), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(42), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(6), 2,
      sym_comment,
      aux_sym_string_repeat1,
    STATE(12), 2,
      sym_string_text_fragment,
      sym_string_expansion,
  [143] = 8,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(50), 1,
      aux_sym_string_text_fragment2_token1,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(7), 2,
      sym_comment,
      aux_sym_string_repeat2,
    STATE(17), 2,
      sym_string_text_fragment2,
      sym_string_expansion,
  [170] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_record_type_token1,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(34), 1,
      sym_identifier,
    STATE(49), 1,
      sym_string,
  [192] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_record_type_token1,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(34), 1,
      sym_identifier,
    STATE(40), 1,
      sym_string,
  [214] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_string_text_fragment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(65), 4,
      anon_sym_SQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
  [230] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_record,
    STATE(37), 1,
      sym__declaration,
    STATE(38), 1,
      sym_record,
    STATE(11), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [250] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      aux_sym_string_text_fragment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(74), 4,
      anon_sym_SQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
  [266] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_record,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(37), 1,
      sym__declaration,
    STATE(38), 1,
      sym_record,
  [288] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      aux_sym_string_text_fragment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(80), 4,
      anon_sym_SQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
  [304] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_record_type_token1,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(34), 1,
      sym_identifier,
    STATE(47), 1,
      sym_string,
  [326] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_string_text_fragment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(65), 4,
      anon_sym_SQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
  [342] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      aux_sym_string_text_fragment2_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
  [358] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      aux_sym_string_text_fragment2_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(88), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
  [374] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_string_text_fragment2_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(65), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
  [390] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_string_text_fragment2_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(65), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
  [406] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      anon_sym_field,
    STATE(21), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_record_body_repeat1,
    STATE(36), 1,
      sym_field,
  [425] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      anon_sym_field,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_record_body_repeat1,
    STATE(36), 1,
      sym_field,
  [444] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      anon_sym_field,
    STATE(36), 1,
      sym_field,
    STATE(23), 2,
      sym_comment,
      aux_sym_record_body_repeat1,
  [461] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [475] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [487] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_record_type_token1,
    STATE(24), 1,
      sym_identifier,
    STATE(26), 1,
      sym_comment,
    STATE(55), 1,
      sym__string_expansion_inner,
  [503] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_record_type_token1,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_comment,
    STATE(50), 1,
      sym__string_expansion_inner,
  [519] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_record_type_token1,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym_comment,
    STATE(54), 1,
      sym__string_expansion_inner,
  [535] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_record_type_token1,
    STATE(24), 1,
      sym_identifier,
    STATE(29), 1,
      sym_comment,
    STATE(51), 1,
      sym__string_expansion_inner,
  [551] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_record,
  [562] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_comment,
    STATE(44), 1,
      sym_record_body,
  [575] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [586] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      aux_sym_record_type_token1,
    STATE(33), 1,
      sym_comment,
    STATE(52), 1,
      sym_record_type,
  [599] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [610] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__record_parameters,
    STATE(35), 1,
      sym_comment,
  [623] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_RBRACE,
      anon_sym_field,
  [634] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_record,
  [645] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_record,
  [656] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      anon_sym_field,
  [667] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [678] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_record,
  [689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      aux_sym_record_type_token1,
    STATE(42), 1,
      sym_comment,
    STATE(48), 1,
      sym_record_type,
  [702] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [713] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_record,
  [724] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_comment,
  [734] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      sym_comment,
  [744] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_comment,
  [754] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      sym_comment,
  [764] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_comment,
  [774] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_comment,
  [784] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
  [794] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_comment,
  [804] = 3,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
  [814] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_comment,
  [824] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_comment,
  [834] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_comment,
  [844] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_comment,
  [854] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 230,
  [SMALL_STATE(12)] = 250,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 288,
  [SMALL_STATE(15)] = 304,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 358,
  [SMALL_STATE(19)] = 374,
  [SMALL_STATE(20)] = 390,
  [SMALL_STATE(21)] = 406,
  [SMALL_STATE(22)] = 425,
  [SMALL_STATE(23)] = 444,
  [SMALL_STATE(24)] = 461,
  [SMALL_STATE(25)] = 475,
  [SMALL_STATE(26)] = 487,
  [SMALL_STATE(27)] = 503,
  [SMALL_STATE(28)] = 519,
  [SMALL_STATE(29)] = 535,
  [SMALL_STATE(30)] = 551,
  [SMALL_STATE(31)] = 562,
  [SMALL_STATE(32)] = 575,
  [SMALL_STATE(33)] = 586,
  [SMALL_STATE(34)] = 599,
  [SMALL_STATE(35)] = 610,
  [SMALL_STATE(36)] = 623,
  [SMALL_STATE(37)] = 634,
  [SMALL_STATE(38)] = 645,
  [SMALL_STATE(39)] = 656,
  [SMALL_STATE(40)] = 667,
  [SMALL_STATE(41)] = 678,
  [SMALL_STATE(42)] = 689,
  [SMALL_STATE(43)] = 702,
  [SMALL_STATE(44)] = 713,
  [SMALL_STATE(45)] = 724,
  [SMALL_STATE(46)] = 734,
  [SMALL_STATE(47)] = 744,
  [SMALL_STATE(48)] = 754,
  [SMALL_STATE(49)] = 764,
  [SMALL_STATE(50)] = 774,
  [SMALL_STATE(51)] = 784,
  [SMALL_STATE(52)] = 794,
  [SMALL_STATE(53)] = 804,
  [SMALL_STATE(54)] = 814,
  [SMALL_STATE(55)] = 824,
  [SMALL_STATE(56)] = 834,
  [SMALL_STATE(57)] = 844,
  [SMALL_STATE(58)] = 854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(29),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(27),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(18),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(18),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(28),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(26),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_expansion, 3, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expansion, 3, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment2, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment2, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2), SHIFT_REPEAT(57),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_expansion_inner, 1, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_expansion_inner, 3, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_parameters, 5, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epics_db(void) {
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
