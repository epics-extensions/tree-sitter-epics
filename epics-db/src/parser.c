#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_record = 1,
  aux_sym__type_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_field = 8,
  anon_sym_POUND = 9,
  aux_sym_comment_token1 = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_text_fragment_token1 = 13,
  anon_sym_BSLASH = 14,
  aux_sym_string_text_fragment2_token1 = 15,
  anon_sym_BSLASH_DQUOTE = 16,
  anon_sym_BSLASH_BSLASH = 17,
  anon_sym_BSLASH_DOLLAR = 18,
  anon_sym_DOLLAR_LBRACE = 19,
  anon_sym_DOLLAR_LPAREN = 20,
  sym__macro_expansion_inner = 21,
  sym_source_file = 22,
  sym__declaration = 23,
  sym_record = 24,
  sym__type = 25,
  sym__record_parameters = 26,
  sym_record_body = 27,
  sym_field = 28,
  sym_comment = 29,
  sym_string = 30,
  sym_string_text_fragment = 31,
  sym_string_text_fragment2 = 32,
  sym_escape_sequence = 33,
  sym_identifier = 34,
  sym_macro_expansion = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_record_body_repeat1 = 37,
  aux_sym_string_repeat1 = 38,
  aux_sym_string_repeat2 = 39,
  aux_sym_string_text_fragment_repeat1 = 40,
  aux_sym_string_text_fragment2_repeat1 = 41,
  alias_sym_field_type = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_record] = "record",
  [aux_sym__type_token1] = "_type_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_field] = "field",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_text_fragment_token1] = "string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_text_fragment2_token1] = "string_text_fragment2_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH_DOLLAR] = "\\$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [sym__macro_expansion_inner] = "_macro_expansion_inner",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_record] = "record",
  [sym__type] = "record_type",
  [sym__record_parameters] = "_record_parameters",
  [sym_record_body] = "record_body",
  [sym_field] = "field",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_string_text_fragment] = "string_text_fragment",
  [sym_string_text_fragment2] = "string_text_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "string_text_fragment",
  [sym_macro_expansion] = "macro_expansion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_record_body_repeat1] = "record_body_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_text_fragment_repeat1] = "string_text_fragment_repeat1",
  [aux_sym_string_text_fragment2_repeat1] = "string_text_fragment2_repeat1",
  [alias_sym_field_type] = "field_type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_record] = anon_sym_record,
  [aux_sym__type_token1] = aux_sym__type_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_text_fragment_token1] = aux_sym_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_text_fragment2_token1] = aux_sym_string_text_fragment2_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [sym__macro_expansion_inner] = sym__macro_expansion_inner,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_record] = sym_record,
  [sym__type] = sym__type,
  [sym__record_parameters] = sym__record_parameters,
  [sym_record_body] = sym_record_body,
  [sym_field] = sym_field,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_string_text_fragment] = sym_string_text_fragment,
  [sym_string_text_fragment2] = sym_string_text_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_string_text_fragment,
  [sym_macro_expansion] = sym_macro_expansion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_record_body_repeat1] = aux_sym_record_body_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_text_fragment_repeat1] = aux_sym_string_text_fragment_repeat1,
  [aux_sym_string_text_fragment2_repeat1] = aux_sym_string_text_fragment2_repeat1,
  [alias_sym_field_type] = alias_sym_field_type,
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
  [aux_sym__type_token1] = {
    .visible = false,
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
  [aux_sym_string_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_text_fragment2_token1] = {
    .visible = false,
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
  [anon_sym_BSLASH_DOLLAR] = {
    .visible = true,
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
  [sym__macro_expansion_inner] = {
    .visible = false,
    .named = true,
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
  [sym__type] = {
    .visible = true,
    .named = true,
  },
  [sym__record_parameters] = {
    .visible = false,
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_expansion] = {
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
  [aux_sym_string_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_text_fragment2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_type] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [3] =
    {field_name, 3},
    {field_type, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [2] = alias_sym_field_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__type, 2,
    sym__type,
    alias_sym_field_type,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '{') ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(18);
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
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_record);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'c') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'd') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'd') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'i') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'o') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == 'r') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_text_fragment2_token1);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_text_fragment2_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {(TSStateId)(-1)},
  [54] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_macro_expansion] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [aux_sym__type_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__declaration] = STATE(34),
    [sym_record] = STATE(26),
    [sym_comment] = STATE(1),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      aux_sym_string_text_fragment2_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(3), 1,
      aux_sym_string_repeat2,
    STATE(10), 1,
      aux_sym_string_text_fragment2_repeat1,
    STATE(2), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(12), 2,
      sym_string_text_fragment2,
      sym_escape_sequence,
    ACTIONS(21), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [38] = 10,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(32), 1,
      aux_sym_string_text_fragment2_token1,
    STATE(10), 1,
      aux_sym_string_text_fragment2_repeat1,
    STATE(12), 2,
      sym_string_text_fragment2,
      sym_escape_sequence,
    ACTIONS(35), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
    STATE(3), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_repeat2,
  [74] = 10,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(14), 2,
      sym_string_text_fragment,
      sym_escape_sequence,
    ACTIONS(46), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
    STATE(4), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_repeat1,
  [110] = 11,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(53), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      aux_sym_string_repeat1,
    STATE(11), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(5), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(14), 2,
      sym_string_text_fragment,
      sym_escape_sequence,
    ACTIONS(55), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [148] = 11,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(51), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(53), 1,
      anon_sym_BSLASH,
    STATE(4), 1,
      aux_sym_string_repeat1,
    STATE(11), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(6), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(14), 2,
      sym_string_text_fragment,
      sym_escape_sequence,
    ACTIONS(55), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [186] = 11,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      aux_sym_string_text_fragment2_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      aux_sym_string_repeat2,
    STATE(10), 1,
      aux_sym_string_text_fragment2_repeat1,
    STATE(7), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(12), 2,
      sym_string_text_fragment2,
      sym_escape_sequence,
    ACTIONS(21), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [224] = 8,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      aux_sym_string_text_fragment2_token1,
    ACTIONS(65), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
    STATE(8), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_text_fragment2_repeat1,
  [253] = 8,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(72), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
    STATE(9), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_text_fragment_repeat1,
  [282] = 9,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      aux_sym_string_text_fragment2_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_string_text_fragment2_repeat1,
    STATE(10), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(79), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [313] = 9,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(51), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(53), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(11), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(83), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [344] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(85), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    STATE(12), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(87), 4,
      aux_sym_string_text_fragment2_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [368] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(89), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    STATE(13), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(91), 4,
      aux_sym_string_text_fragment2_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [392] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(93), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    STATE(14), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(95), 4,
      aux_sym_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [416] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(97), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    STATE(15), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(99), 4,
      aux_sym_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [440] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(101), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    STATE(16), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(103), 4,
      aux_sym_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [464] = 6,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(97), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    STATE(17), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(99), 4,
      aux_sym_string_text_fragment2_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
  [488] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(105), 1,
      aux_sym__type_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_identifier,
    STATE(50), 1,
      sym_string,
    STATE(18), 2,
      sym_comment,
      sym_macro_expansion,
  [517] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_source_file_repeat1,
    STATE(26), 1,
      sym_record,
    STATE(34), 1,
      sym__declaration,
    STATE(19), 2,
      sym_comment,
      sym_macro_expansion,
  [546] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      anon_sym_record,
    STATE(26), 1,
      sym_record,
    STATE(34), 1,
      sym__declaration,
    STATE(20), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
  [573] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(105), 1,
      aux_sym__type_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_string,
    STATE(48), 1,
      sym_identifier,
    STATE(21), 2,
      sym_comment,
      sym_macro_expansion,
  [602] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_field,
    STATE(23), 1,
      aux_sym_record_body_repeat1,
    STATE(35), 1,
      sym_field,
    STATE(22), 2,
      sym_comment,
      sym_macro_expansion,
  [628] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_field,
    STATE(35), 1,
      sym_field,
    STATE(23), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_body_repeat1,
  [652] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(120), 1,
      anon_sym_field,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_record_body_repeat1,
    STATE(35), 1,
      sym_field,
    STATE(24), 2,
      sym_comment,
      sym_macro_expansion,
  [678] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_record_body,
    STATE(25), 2,
      sym_comment,
      sym_macro_expansion,
  [698] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_record,
    STATE(26), 2,
      sym_comment,
      sym_macro_expansion,
  [716] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_record,
    STATE(27), 2,
      sym_comment,
      sym_macro_expansion,
  [734] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(135), 2,
      anon_sym_RBRACE,
      anon_sym_field,
    STATE(28), 2,
      sym_comment,
      sym_macro_expansion,
  [752] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(137), 1,
      aux_sym__type_token1,
    STATE(36), 1,
      sym__type,
    STATE(29), 2,
      sym_comment,
      sym_macro_expansion,
  [772] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__record_parameters,
    STATE(30), 2,
      sym_comment,
      sym_macro_expansion,
  [792] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(137), 1,
      aux_sym__type_token1,
    STATE(43), 1,
      sym__type,
    STATE(31), 2,
      sym_comment,
      sym_macro_expansion,
  [812] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_record,
    STATE(32), 2,
      sym_comment,
      sym_macro_expansion,
  [830] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_record,
    STATE(33), 2,
      sym_comment,
      sym_macro_expansion,
  [848] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_record,
    STATE(34), 2,
      sym_comment,
      sym_macro_expansion,
  [866] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_field,
    STATE(35), 2,
      sym_comment,
      sym_macro_expansion,
  [884] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    STATE(36), 2,
      sym_comment,
      sym_macro_expansion,
  [901] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(37), 2,
      sym_comment,
      sym_macro_expansion,
  [918] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(38), 2,
      sym_comment,
      sym_macro_expansion,
  [935] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(39), 2,
      sym_comment,
      sym_macro_expansion,
  [952] = 5,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(157), 1,
      aux_sym_comment_token1,
    STATE(40), 2,
      sym_comment,
      sym_macro_expansion,
  [969] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_comment,
      sym_macro_expansion,
  [986] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    STATE(42), 2,
      sym_comment,
      sym_macro_expansion,
  [1003] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    STATE(43), 2,
      sym_comment,
      sym_macro_expansion,
  [1020] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(44), 2,
      sym_comment,
      sym_macro_expansion,
  [1037] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(45), 2,
      sym_comment,
      sym_macro_expansion,
  [1054] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(46), 2,
      sym_comment,
      sym_macro_expansion,
  [1071] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_comment,
      sym_macro_expansion,
  [1088] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(48), 2,
      sym_comment,
      sym_macro_expansion,
  [1105] = 5,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(175), 1,
      sym__macro_expansion_inner,
    STATE(49), 2,
      sym_comment,
      sym_macro_expansion,
  [1122] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(50), 2,
      sym_comment,
      sym_macro_expansion,
  [1139] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(51), 2,
      sym_comment,
      sym_macro_expansion,
  [1156] = 5,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(179), 1,
      sym__macro_expansion_inner,
    STATE(52), 2,
      sym_comment,
      sym_macro_expansion,
  [1173] = 1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [1177] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 224,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 313,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 368,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 440,
  [SMALL_STATE(17)] = 464,
  [SMALL_STATE(18)] = 488,
  [SMALL_STATE(19)] = 517,
  [SMALL_STATE(20)] = 546,
  [SMALL_STATE(21)] = 573,
  [SMALL_STATE(22)] = 602,
  [SMALL_STATE(23)] = 628,
  [SMALL_STATE(24)] = 652,
  [SMALL_STATE(25)] = 678,
  [SMALL_STATE(26)] = 698,
  [SMALL_STATE(27)] = 716,
  [SMALL_STATE(28)] = 734,
  [SMALL_STATE(29)] = 752,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 792,
  [SMALL_STATE(32)] = 812,
  [SMALL_STATE(33)] = 830,
  [SMALL_STATE(34)] = 848,
  [SMALL_STATE(35)] = 866,
  [SMALL_STATE(36)] = 884,
  [SMALL_STATE(37)] = 901,
  [SMALL_STATE(38)] = 918,
  [SMALL_STATE(39)] = 935,
  [SMALL_STATE(40)] = 952,
  [SMALL_STATE(41)] = 969,
  [SMALL_STATE(42)] = 986,
  [SMALL_STATE(43)] = 1003,
  [SMALL_STATE(44)] = 1020,
  [SMALL_STATE(45)] = 1037,
  [SMALL_STATE(46)] = 1054,
  [SMALL_STATE(47)] = 1071,
  [SMALL_STATE(48)] = 1088,
  [SMALL_STATE(49)] = 1105,
  [SMALL_STATE(50)] = 1122,
  [SMALL_STATE(51)] = 1139,
  [SMALL_STATE(52)] = 1156,
  [SMALL_STATE(53)] = 1173,
  [SMALL_STATE(54)] = 1177,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(15),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment2_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_text_fragment2_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_text_fragment2_repeat1, 2), SHIFT_REPEAT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment2_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment2, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment2, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment2_repeat1, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment2_repeat1, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2), SHIFT_REPEAT(45),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_parameters, 5, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
