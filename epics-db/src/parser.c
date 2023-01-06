#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_path = 1,
  anon_sym_addpath = 2,
  anon_sym_include = 3,
  anon_sym_menu = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_choice = 9,
  anon_sym_COMMA = 10,
  anon_sym_recordtype = 11,
  anon_sym_field = 12,
  anon_sym_PERCENT = 13,
  aux_sym_ccode_token1 = 14,
  anon_sym_device = 15,
  anon_sym_driver = 16,
  anon_sym_registrar = 17,
  anon_sym_variable = 18,
  anon_sym_function = 19,
  anon_sym_breaktable = 20,
  sym_double = 21,
  anon_sym_record = 22,
  anon_sym_grecord = 23,
  anon_sym_alias = 24,
  anon_sym_info = 25,
  anon_sym_POUND = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_string_text_fragment_token1 = 28,
  anon_sym_BSLASH = 29,
  sym_escape_sequence = 30,
  anon_sym_null = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  aux_sym__json_object_token1 = 34,
  anon_sym_LBRACK = 35,
  aux_sym__json_array_token1 = 36,
  anon_sym_RBRACK = 37,
  sym__unquoted_string = 38,
  anon_sym_DOLLAR_LBRACE = 39,
  anon_sym_DOLLAR_LPAREN = 40,
  sym__macro_expansion_inner = 41,
  sym_source_file = 42,
  sym__statements = 43,
  sym_path_definition = 44,
  sym_include_statement = 45,
  sym_menu_definition = 46,
  sym_menu_choice = 47,
  sym_record_type_definition = 48,
  sym_field_definition = 49,
  sym_field_descriptor = 50,
  sym_cdef = 51,
  sym_ccode = 52,
  sym_device_support_declaration = 53,
  sym_driver_declaration = 54,
  sym_registrar_declaration = 55,
  sym_variable_declaration = 56,
  sym_function_declaration = 57,
  sym_breakpoint_table = 58,
  sym_breakpoint_item = 59,
  sym_record_instance = 60,
  sym_alias = 61,
  sym_field = 62,
  sym_info = 63,
  sym_alias_statement = 64,
  sym_comment = 65,
  sym_string = 66,
  sym__string = 67,
  sym_string_text_fragment = 68,
  sym_json_value = 69,
  sym__json_object = 70,
  sym__json_array = 71,
  sym_record_type = 72,
  sym_record_name = 73,
  sym_field_item = 74,
  sym_field_name = 75,
  sym_macro_expansion = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_menu_definition_repeat1 = 78,
  aux_sym_record_type_definition_repeat1 = 79,
  aux_sym_field_definition_repeat1 = 80,
  aux_sym_breakpoint_table_repeat1 = 81,
  aux_sym_record_instance_repeat1 = 82,
  aux_sym__string_repeat1 = 83,
  aux_sym_string_text_fragment_repeat1 = 84,
  aux_sym__json_object_repeat1 = 85,
  aux_sym__json_array_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_path] = "path",
  [anon_sym_addpath] = "addpath",
  [anon_sym_include] = "include",
  [anon_sym_menu] = "menu",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_choice] = "choice",
  [anon_sym_COMMA] = ",",
  [anon_sym_recordtype] = "recordtype",
  [anon_sym_field] = "field",
  [anon_sym_PERCENT] = "%",
  [aux_sym_ccode_token1] = "ccode_token1",
  [anon_sym_device] = "device",
  [anon_sym_driver] = "driver",
  [anon_sym_registrar] = "registrar",
  [anon_sym_variable] = "variable",
  [anon_sym_function] = "function",
  [anon_sym_breaktable] = "breaktable",
  [sym_double] = "double",
  [anon_sym_record] = "record",
  [anon_sym_grecord] = "grecord",
  [anon_sym_alias] = "alias",
  [anon_sym_info] = "info",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_text_fragment_token1] = "string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__json_object_token1] = "_json_object_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym__json_array_token1] = "_json_array_token1",
  [anon_sym_RBRACK] = "]",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [sym__macro_expansion_inner] = "_macro_expansion_inner",
  [sym_source_file] = "source_file",
  [sym__statements] = "_statements",
  [sym_path_definition] = "path_definition",
  [sym_include_statement] = "include_statement",
  [sym_menu_definition] = "menu_definition",
  [sym_menu_choice] = "menu_choice",
  [sym_record_type_definition] = "record_type_definition",
  [sym_field_definition] = "field_definition",
  [sym_field_descriptor] = "field_descriptor",
  [sym_cdef] = "cdef",
  [sym_ccode] = "ccode",
  [sym_device_support_declaration] = "device_support_declaration",
  [sym_driver_declaration] = "driver_declaration",
  [sym_registrar_declaration] = "registrar_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_breakpoint_table] = "breakpoint_table",
  [sym_breakpoint_item] = "breakpoint_item",
  [sym_record_instance] = "record_instance",
  [sym_alias] = "alias",
  [sym_field] = "field",
  [sym_info] = "info",
  [sym_alias_statement] = "alias_statement",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym__string] = "_string",
  [sym_string_text_fragment] = "string_text_fragment",
  [sym_json_value] = "json_value",
  [sym__json_object] = "_json_object",
  [sym__json_array] = "_json_array",
  [sym_record_type] = "record_type",
  [sym_record_name] = "record_name",
  [sym_field_item] = "field_item",
  [sym_field_name] = "field_name",
  [sym_macro_expansion] = "macro_expansion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_menu_definition_repeat1] = "menu_definition_repeat1",
  [aux_sym_record_type_definition_repeat1] = "record_type_definition_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym_breakpoint_table_repeat1] = "breakpoint_table_repeat1",
  [aux_sym_record_instance_repeat1] = "record_instance_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym_string_text_fragment_repeat1] = "string_text_fragment_repeat1",
  [aux_sym__json_object_repeat1] = "_json_object_repeat1",
  [aux_sym__json_array_repeat1] = "_json_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_addpath] = anon_sym_addpath,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_choice] = anon_sym_choice,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_recordtype] = anon_sym_recordtype,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_ccode_token1] = aux_sym_ccode_token1,
  [anon_sym_device] = anon_sym_device,
  [anon_sym_driver] = anon_sym_driver,
  [anon_sym_registrar] = anon_sym_registrar,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_breaktable] = anon_sym_breaktable,
  [sym_double] = sym_double,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_grecord] = anon_sym_grecord,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_text_fragment_token1] = aux_sym_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__json_object_token1] = aux_sym__json_object_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__json_array_token1] = aux_sym__json_array_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [sym__macro_expansion_inner] = sym__macro_expansion_inner,
  [sym_source_file] = sym_source_file,
  [sym__statements] = sym__statements,
  [sym_path_definition] = sym_path_definition,
  [sym_include_statement] = sym_include_statement,
  [sym_menu_definition] = sym_menu_definition,
  [sym_menu_choice] = sym_menu_choice,
  [sym_record_type_definition] = sym_record_type_definition,
  [sym_field_definition] = sym_field_definition,
  [sym_field_descriptor] = sym_field_descriptor,
  [sym_cdef] = sym_cdef,
  [sym_ccode] = sym_ccode,
  [sym_device_support_declaration] = sym_device_support_declaration,
  [sym_driver_declaration] = sym_driver_declaration,
  [sym_registrar_declaration] = sym_registrar_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_breakpoint_table] = sym_breakpoint_table,
  [sym_breakpoint_item] = sym_breakpoint_item,
  [sym_record_instance] = sym_record_instance,
  [sym_alias] = sym_alias,
  [sym_field] = sym_field,
  [sym_info] = sym_info,
  [sym_alias_statement] = sym_alias_statement,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym__string] = sym__string,
  [sym_string_text_fragment] = sym_string_text_fragment,
  [sym_json_value] = sym_json_value,
  [sym__json_object] = sym__json_object,
  [sym__json_array] = sym__json_array,
  [sym_record_type] = sym_record_type,
  [sym_record_name] = sym_record_name,
  [sym_field_item] = sym_field_item,
  [sym_field_name] = sym_field_name,
  [sym_macro_expansion] = sym_macro_expansion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_menu_definition_repeat1] = aux_sym_menu_definition_repeat1,
  [aux_sym_record_type_definition_repeat1] = aux_sym_record_type_definition_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym_breakpoint_table_repeat1] = aux_sym_breakpoint_table_repeat1,
  [aux_sym_record_instance_repeat1] = aux_sym_record_instance_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym_string_text_fragment_repeat1] = aux_sym_string_text_fragment_repeat1,
  [aux_sym__json_object_repeat1] = aux_sym__json_object_repeat1,
  [aux_sym__json_array_repeat1] = aux_sym__json_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_choice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recordtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ccode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_device] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_driver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_registrar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breaktable] = {
    .visible = true,
    .named = false,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grecord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_object_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_array_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
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
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_path_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_descriptor] = {
    .visible = true,
    .named = true,
  },
  [sym_cdef] = {
    .visible = true,
    .named = true,
  },
  [sym_ccode] = {
    .visible = true,
    .named = true,
  },
  [sym_device_support_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_driver_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_registrar_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_breakpoint_table] = {
    .visible = true,
    .named = true,
  },
  [sym_breakpoint_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_info] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_statement] = {
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
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_string_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_json_value] = {
    .visible = true,
    .named = true,
  },
  [sym__json_object] = {
    .visible = false,
    .named = true,
  },
  [sym__json_array] = {
    .visible = false,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field_item] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
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
  [aux_sym_menu_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_breakpoint_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias_name = 1,
  field_choice = 2,
  field_code = 3,
  field_dset_name = 4,
  field_eng_value = 5,
  field_link_type = 6,
  field_name = 7,
  field_raw_value = 8,
  field_record_name = 9,
  field_record_type = 10,
  field_string = 11,
  field_type = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_choice] = "choice",
  [field_code] = "code",
  [field_dset_name] = "dset_name",
  [field_eng_value] = "eng_value",
  [field_link_type] = "link_type",
  [field_name] = "name",
  [field_raw_value] = "raw_value",
  [field_record_name] = "record_name",
  [field_record_type] = "record_type",
  [field_string] = "string",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 4},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_name, 2},
    {field_type, 4},
  [3] =
    {field_alias_name, 4},
    {field_record_name, 2},
  [5] =
    {field_code, 1},
  [6] =
    {field_eng_value, 1},
    {field_raw_value, 0},
  [8] =
    {field_eng_value, 2},
    {field_raw_value, 0},
  [10] =
    {field_name, 4},
    {field_type, 2},
  [12] =
    {field_choice, 8},
    {field_dset_name, 6},
    {field_link_type, 4},
    {field_record_type, 2},
  [16] =
    {field_name, 2},
    {field_string, 4},
  [18] =
    {field_alias_name, 2},
  [19] =
    {field_name, 2},
    {field_value, 4},
  [21] =
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '$'
        ? c == '"'
        : c <= '$')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == '[') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == '}') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '[') ADVANCE(175);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '$') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 109:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == '[') ADVANCE(175);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_addpath);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_recordtype);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '$') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '{') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_driver);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_registrar);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_breaktable);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'p') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_grecord);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'x') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(114);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '$') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 121},
  [5] = {.lex_state = 121},
  [6] = {.lex_state = 121},
  [7] = {.lex_state = 121},
  [8] = {.lex_state = 121},
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 121},
  [30] = {.lex_state = 121},
  [31] = {.lex_state = 121},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 121},
  [47] = {.lex_state = 121},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 121},
  [52] = {.lex_state = 121},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 136},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 136},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {(TSStateId)(-1)},
  [177] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_macro_expansion] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_addpath] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_choice] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_recordtype] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_device] = ACTIONS(1),
    [anon_sym_driver] = ACTIONS(1),
    [anon_sym_registrar] = ACTIONS(1),
    [anon_sym_variable] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_breaktable] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_grecord] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(142),
    [sym__statements] = STATE(19),
    [sym_path_definition] = STATE(20),
    [sym_include_statement] = STATE(20),
    [sym_menu_definition] = STATE(20),
    [sym_record_type_definition] = STATE(20),
    [sym_device_support_declaration] = STATE(20),
    [sym_driver_declaration] = STATE(20),
    [sym_registrar_declaration] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [sym_breakpoint_table] = STATE(20),
    [sym_record_instance] = STATE(20),
    [sym_alias_statement] = STATE(20),
    [sym_comment] = STATE(1),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_path] = ACTIONS(11),
    [anon_sym_addpath] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_menu] = ACTIONS(15),
    [anon_sym_recordtype] = ACTIONS(17),
    [anon_sym_device] = ACTIONS(19),
    [anon_sym_driver] = ACTIONS(21),
    [anon_sym_registrar] = ACTIONS(23),
    [anon_sym_variable] = ACTIONS(25),
    [anon_sym_function] = ACTIONS(27),
    [anon_sym_breaktable] = ACTIONS(29),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_grecord] = ACTIONS(33),
    [anon_sym_alias] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(15), 1,
      anon_sym_menu,
    ACTIONS(17), 1,
      anon_sym_recordtype,
    ACTIONS(19), 1,
      anon_sym_device,
    ACTIONS(21), 1,
      anon_sym_driver,
    ACTIONS(23), 1,
      anon_sym_registrar,
    ACTIONS(25), 1,
      anon_sym_variable,
    ACTIONS(27), 1,
      anon_sym_function,
    ACTIONS(29), 1,
      anon_sym_breaktable,
    ACTIONS(31), 1,
      anon_sym_record,
    ACTIONS(33), 1,
      anon_sym_grecord,
    ACTIONS(35), 1,
      anon_sym_alias,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 1,
      sym__statements,
    ACTIONS(11), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(2), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(20), 12,
      sym_path_definition,
      sym_include_statement,
      sym_menu_definition,
      sym_record_type_definition,
      sym_device_support_declaration,
      sym_driver_declaration,
      sym_registrar_declaration,
      sym_variable_declaration,
      sym_function_declaration,
      sym_breakpoint_table,
      sym_record_instance,
      sym_alias_statement,
  [77] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_include,
    ACTIONS(47), 1,
      anon_sym_menu,
    ACTIONS(50), 1,
      anon_sym_recordtype,
    ACTIONS(53), 1,
      anon_sym_device,
    ACTIONS(56), 1,
      anon_sym_driver,
    ACTIONS(59), 1,
      anon_sym_registrar,
    ACTIONS(62), 1,
      anon_sym_variable,
    ACTIONS(65), 1,
      anon_sym_function,
    ACTIONS(68), 1,
      anon_sym_breaktable,
    ACTIONS(71), 1,
      anon_sym_record,
    ACTIONS(74), 1,
      anon_sym_grecord,
    ACTIONS(77), 1,
      anon_sym_alias,
    STATE(19), 1,
      sym__statements,
    ACTIONS(41), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(3), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
    STATE(20), 12,
      sym_path_definition,
      sym_include_statement,
      sym_menu_definition,
      sym_record_type_definition,
      sym_device_support_declaration,
      sym_driver_declaration,
      sym_registrar_declaration,
      sym_variable_declaration,
      sym_function_declaration,
      sym_breakpoint_table,
      sym_record_instance,
      sym_alias_statement,
  [152] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(82), 1,
      anon_sym_record,
    STATE(4), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(80), 22,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [193] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(86), 1,
      anon_sym_record,
    STATE(5), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(84), 22,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [234] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(90), 1,
      anon_sym_record,
    STATE(6), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(88), 22,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [275] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(94), 1,
      anon_sym_record,
    STATE(7), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(92), 21,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [315] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(98), 1,
      anon_sym_record,
    STATE(8), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(96), 19,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [353] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(102), 1,
      anon_sym_record,
    STATE(9), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(100), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [386] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(106), 1,
      anon_sym_record,
    STATE(10), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(104), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [419] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(110), 1,
      anon_sym_record,
    STATE(11), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(108), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [452] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(114), 1,
      anon_sym_record,
    STATE(12), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(112), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [485] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(118), 1,
      anon_sym_record,
    STATE(13), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [518] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(122), 1,
      anon_sym_record,
    STATE(14), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(120), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [551] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(126), 1,
      anon_sym_record,
    STATE(15), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(124), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [584] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(130), 1,
      anon_sym_record,
    STATE(16), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(128), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [617] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(134), 1,
      anon_sym_record,
    STATE(17), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(132), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [650] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(138), 1,
      anon_sym_record,
    STATE(18), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(136), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [683] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(142), 1,
      anon_sym_record,
    STATE(19), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(140), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [716] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(146), 1,
      anon_sym_record,
    STATE(20), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(144), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [749] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(150), 1,
      anon_sym_record,
    STATE(21), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(148), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [782] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(154), 1,
      anon_sym_record,
    STATE(22), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(152), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [815] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(158), 1,
      anon_sym_record,
    STATE(23), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(156), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [848] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(162), 1,
      anon_sym_record,
    STATE(24), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(160), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [881] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(166), 1,
      anon_sym_record,
    STATE(25), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(164), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [914] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(170), 1,
      anon_sym_record,
    STATE(26), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(168), 14,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [947] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(27), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(143), 2,
      sym__json_object,
      sym__json_array,
    STATE(144), 2,
      sym_string,
      sym_json_value,
    ACTIONS(176), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [989] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(28), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(143), 2,
      sym__json_object,
      sym__json_array,
    STATE(145), 2,
      sym_string,
      sym_json_value,
    ACTIONS(176), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [1031] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(182), 1,
      anon_sym_include,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      anon_sym_field,
    ACTIONS(190), 1,
      anon_sym_alias,
    ACTIONS(193), 1,
      anon_sym_info,
    STATE(29), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_instance_repeat1,
    STATE(47), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1067] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      anon_sym_field,
    ACTIONS(200), 1,
      anon_sym_alias,
    ACTIONS(202), 1,
      anon_sym_info,
    STATE(31), 1,
      aux_sym_record_instance_repeat1,
    STATE(30), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(47), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1105] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(198), 1,
      anon_sym_field,
    ACTIONS(200), 1,
      anon_sym_alias,
    ACTIONS(202), 1,
      anon_sym_info,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_record_instance_repeat1,
    STATE(31), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(47), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1143] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_field,
    ACTIONS(210), 1,
      anon_sym_PERCENT,
    STATE(34), 1,
      aux_sym_record_type_definition_repeat1,
    STATE(32), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(64), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1177] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(208), 1,
      anon_sym_field,
    ACTIONS(210), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_record_type_definition_repeat1,
    STATE(33), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(64), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1211] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(214), 1,
      anon_sym_include,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_field,
    ACTIONS(222), 1,
      anon_sym_PERCENT,
    STATE(34), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_type_definition_repeat1,
    STATE(64), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1243] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym__unquoted_string,
    STATE(96), 1,
      sym_field_descriptor,
    STATE(148), 1,
      sym__string,
    STATE(149), 1,
      sym_field_item,
    STATE(35), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_field_definition_repeat1,
  [1276] = 11,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(239), 1,
      anon_sym_BSLASH,
    ACTIONS(241), 1,
      sym_escape_sequence,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(37), 1,
      aux_sym__string_repeat1,
    STATE(44), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(68), 1,
      sym_string_text_fragment,
    STATE(36), 2,
      sym_comment,
      sym_macro_expansion,
  [1311] = 11,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(239), 1,
      anon_sym_BSLASH,
    ACTIONS(241), 1,
      sym_escape_sequence,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym__string_repeat1,
    STATE(44), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(68), 1,
      sym_string_text_fragment,
    STATE(37), 2,
      sym_comment,
      sym_macro_expansion,
  [1346] = 10,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    ACTIONS(257), 1,
      sym_escape_sequence,
    STATE(44), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(68), 1,
      sym_string_text_fragment,
    STATE(38), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__string_repeat1,
  [1379] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(40), 1,
      aux_sym_field_definition_repeat1,
    STATE(96), 1,
      sym_field_descriptor,
    STATE(148), 1,
      sym__string,
    STATE(149), 1,
      sym_field_item,
    STATE(39), 2,
      sym_comment,
      sym_macro_expansion,
  [1414] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_field_definition_repeat1,
    STATE(96), 1,
      sym_field_descriptor,
    STATE(148), 1,
      sym__string,
    STATE(149), 1,
      sym_field_item,
    STATE(40), 2,
      sym_comment,
      sym_macro_expansion,
  [1449] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_choice,
    STATE(43), 1,
      aux_sym_menu_definition_repeat1,
    STATE(41), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(99), 2,
      sym_include_statement,
      sym_menu_choice,
  [1479] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(270), 1,
      anon_sym_include,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 1,
      anon_sym_choice,
    STATE(99), 2,
      sym_include_statement,
      sym_menu_choice,
    STATE(42), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_menu_definition_repeat1,
  [1507] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(268), 1,
      anon_sym_choice,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_menu_definition_repeat1,
    STATE(43), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(99), 2,
      sym_include_statement,
      sym_menu_choice,
  [1537] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(239), 1,
      anon_sym_BSLASH,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_escape_sequence,
    STATE(55), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(44), 2,
      sym_comment,
      sym_macro_expansion,
  [1566] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 1,
      aux_sym__json_object_token1,
    STATE(49), 1,
      aux_sym__json_object_repeat1,
    STATE(98), 1,
      sym__json_object,
    STATE(45), 2,
      sym_comment,
      sym_macro_expansion,
  [1595] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(46), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(290), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1616] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(47), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(292), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1637] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      aux_sym__json_array_token1,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym__json_array_repeat1,
    STATE(100), 1,
      sym__json_array,
    STATE(48), 2,
      sym_comment,
      sym_macro_expansion,
  [1666] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      aux_sym__json_object_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym__json_object_repeat1,
    STATE(98), 1,
      sym__json_object,
    STATE(49), 2,
      sym_comment,
      sym_macro_expansion,
  [1695] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      aux_sym__json_array_token1,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__json_array_repeat1,
    STATE(100), 1,
      sym__json_array,
    STATE(50), 2,
      sym_comment,
      sym_macro_expansion,
  [1724] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(51), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(304), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1745] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(52), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(306), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1766] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      aux_sym__json_array_token1,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__json_array_repeat1,
    STATE(100), 1,
      sym__json_array,
    STATE(53), 2,
      sym_comment,
      sym_macro_expansion,
  [1795] = 8,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      aux_sym__json_object_token1,
    STATE(98), 1,
      sym__json_object,
    STATE(54), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_object_repeat1,
  [1822] = 8,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(323), 1,
      anon_sym_BSLASH,
    ACTIONS(326), 1,
      sym_escape_sequence,
    STATE(55), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_text_fragment_repeat1,
  [1849] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      aux_sym__json_object_token1,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym__json_object_repeat1,
    STATE(98), 1,
      sym__json_object,
    STATE(56), 2,
      sym_comment,
      sym_macro_expansion,
  [1878] = 8,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      aux_sym__json_array_token1,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym__json_array,
    STATE(57), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_array_repeat1,
  [1905] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      aux_sym__json_array_token1,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__json_array_repeat1,
    STATE(100), 1,
      sym__json_array,
    STATE(58), 2,
      sym_comment,
      sym_macro_expansion,
  [1934] = 9,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      aux_sym__json_object_token1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym__json_object_repeat1,
    STATE(98), 1,
      sym__json_object,
    STATE(59), 2,
      sym_comment,
      sym_macro_expansion,
  [1963] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(139), 1,
      sym_string,
    STATE(60), 2,
      sym_comment,
      sym_macro_expansion,
  [1989] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(125), 1,
      sym_string,
    STATE(61), 2,
      sym_comment,
      sym_macro_expansion,
  [2015] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(123), 1,
      sym_string,
    STATE(62), 2,
      sym_comment,
      sym_macro_expansion,
  [2041] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(130), 1,
      sym_string,
    STATE(63), 2,
      sym_comment,
      sym_macro_expansion,
  [2067] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(64), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(342), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2087] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(124), 1,
      sym__string,
    STATE(133), 1,
      sym_field_name,
    STATE(65), 2,
      sym_comment,
      sym_macro_expansion,
  [2113] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      sym_double,
    STATE(108), 1,
      sym_breakpoint_item,
    STATE(66), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_breakpoint_table_repeat1,
  [2137] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(112), 1,
      sym__string,
    STATE(134), 1,
      sym_record_name,
    STATE(67), 2,
      sym_comment,
      sym_macro_expansion,
  [2163] = 6,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(349), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(351), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_comment,
      sym_macro_expansion,
  [2185] = 6,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(353), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(355), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(69), 2,
      sym_comment,
      sym_macro_expansion,
  [2207] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(135), 1,
      sym_string,
    STATE(70), 2,
      sym_comment,
      sym_macro_expansion,
  [2233] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(159), 1,
      sym_string,
    STATE(71), 2,
      sym_comment,
      sym_macro_expansion,
  [2259] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(116), 1,
      sym_string,
    STATE(72), 2,
      sym_comment,
      sym_macro_expansion,
  [2285] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(166), 1,
      sym_string,
    STATE(73), 2,
      sym_comment,
      sym_macro_expansion,
  [2311] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(112), 1,
      sym__string,
    STATE(158), 1,
      sym_record_name,
    STATE(74), 2,
      sym_comment,
      sym_macro_expansion,
  [2337] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(112), 1,
      sym__string,
    STATE(157), 1,
      sym_record_name,
    STATE(75), 2,
      sym_comment,
      sym_macro_expansion,
  [2363] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(112), 1,
      sym__string,
    STATE(167), 1,
      sym_record_name,
    STATE(76), 2,
      sym_comment,
      sym_macro_expansion,
  [2389] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(111), 1,
      sym__string,
    STATE(173), 1,
      sym_record_type,
    STATE(77), 2,
      sym_comment,
      sym_macro_expansion,
  [2415] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      sym_double,
    STATE(93), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(108), 1,
      sym_breakpoint_item,
    STATE(78), 2,
      sym_comment,
      sym_macro_expansion,
  [2441] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(111), 1,
      sym__string,
    STATE(168), 1,
      sym_record_type,
    STATE(79), 2,
      sym_comment,
      sym_macro_expansion,
  [2467] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(169), 1,
      sym_string,
    STATE(80), 2,
      sym_comment,
      sym_macro_expansion,
  [2493] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(172), 1,
      sym_string,
    STATE(81), 2,
      sym_comment,
      sym_macro_expansion,
  [2519] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(8), 1,
      sym_string,
    STATE(82), 2,
      sym_comment,
      sym_macro_expansion,
  [2545] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(170), 1,
      sym_string,
    STATE(83), 2,
      sym_comment,
      sym_macro_expansion,
  [2571] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(84), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(361), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2591] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(85), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(363), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2611] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(131), 1,
      sym_string,
    STATE(86), 2,
      sym_comment,
      sym_macro_expansion,
  [2637] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(122), 1,
      sym_field_name,
    STATE(124), 1,
      sym__string,
    STATE(87), 2,
      sym_comment,
      sym_macro_expansion,
  [2663] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(88), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(365), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2683] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(175), 1,
      sym_string,
    STATE(89), 2,
      sym_comment,
      sym_macro_expansion,
  [2709] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(10), 1,
      sym_string,
    STATE(90), 2,
      sym_comment,
      sym_macro_expansion,
  [2735] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(171), 1,
      sym_string,
    STATE(91), 2,
      sym_comment,
      sym_macro_expansion,
  [2761] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(111), 1,
      sym__string,
    STATE(174), 1,
      sym_record_type,
    STATE(92), 2,
      sym_comment,
      sym_macro_expansion,
  [2787] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(359), 1,
      sym_double,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(108), 1,
      sym_breakpoint_item,
    STATE(93), 2,
      sym_comment,
      sym_macro_expansion,
  [2813] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(94), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(369), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2833] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(114), 1,
      sym_string,
    STATE(95), 2,
      sym_comment,
      sym_macro_expansion,
  [2859] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(96), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(371), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [2878] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(97), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(373), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [2897] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(98), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(375), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [2916] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(99), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(377), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [2935] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(100), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(379), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [2954] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(101), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(381), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [2973] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(102), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(383), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [2992] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(385), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(103), 2,
      sym_comment,
      sym_macro_expansion,
  [3013] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(104), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(389), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3032] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(105), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(391), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3051] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(106), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(393), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3070] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(395), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(107), 2,
      sym_comment,
      sym_macro_expansion,
  [3091] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(399), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(108), 2,
      sym_comment,
      sym_macro_expansion,
  [3109] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      sym_double,
    STATE(109), 2,
      sym_comment,
      sym_macro_expansion,
  [3129] = 6,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(405), 1,
      aux_sym_ccode_token1,
    STATE(84), 1,
      sym_ccode,
    STATE(110), 2,
      sym_comment,
      sym_macro_expansion,
  [3149] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(111), 2,
      sym_comment,
      sym_macro_expansion,
  [3167] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(409), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(112), 2,
      sym_comment,
      sym_macro_expansion,
  [3185] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(113), 2,
      sym_comment,
      sym_macro_expansion,
  [3203] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    STATE(114), 2,
      sym_comment,
      sym_macro_expansion,
  [3223] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(417), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(115), 2,
      sym_comment,
      sym_macro_expansion,
  [3241] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(116), 2,
      sym_comment,
      sym_macro_expansion,
  [3258] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(117), 2,
      sym_comment,
      sym_macro_expansion,
  [3275] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(118), 2,
      sym_comment,
      sym_macro_expansion,
  [3292] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(119), 2,
      sym_comment,
      sym_macro_expansion,
  [3309] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    STATE(120), 2,
      sym_comment,
      sym_macro_expansion,
  [3326] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(121), 2,
      sym_comment,
      sym_macro_expansion,
  [3343] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(122), 2,
      sym_comment,
      sym_macro_expansion,
  [3360] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(123), 2,
      sym_comment,
      sym_macro_expansion,
  [3377] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    STATE(124), 2,
      sym_comment,
      sym_macro_expansion,
  [3394] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(125), 2,
      sym_comment,
      sym_macro_expansion,
  [3411] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(126), 2,
      sym_comment,
      sym_macro_expansion,
  [3428] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(127), 2,
      sym_comment,
      sym_macro_expansion,
  [3445] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    STATE(128), 2,
      sym_comment,
      sym_macro_expansion,
  [3462] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(129), 2,
      sym_comment,
      sym_macro_expansion,
  [3479] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(130), 2,
      sym_comment,
      sym_macro_expansion,
  [3496] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(131), 2,
      sym_comment,
      sym_macro_expansion,
  [3513] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(132), 2,
      sym_comment,
      sym_macro_expansion,
  [3530] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(133), 2,
      sym_comment,
      sym_macro_expansion,
  [3547] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(134), 2,
      sym_comment,
      sym_macro_expansion,
  [3564] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(135), 2,
      sym_comment,
      sym_macro_expansion,
  [3581] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(459), 1,
      sym_double,
    STATE(136), 2,
      sym_comment,
      sym_macro_expansion,
  [3598] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(137), 2,
      sym_comment,
      sym_macro_expansion,
  [3615] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    STATE(138), 2,
      sym_comment,
      sym_macro_expansion,
  [3632] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(139), 2,
      sym_comment,
      sym_macro_expansion,
  [3649] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    STATE(140), 2,
      sym_comment,
      sym_macro_expansion,
  [3666] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(141), 2,
      sym_comment,
      sym_macro_expansion,
  [3683] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    STATE(142), 2,
      sym_comment,
      sym_macro_expansion,
  [3700] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(143), 2,
      sym_comment,
      sym_macro_expansion,
  [3717] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(144), 2,
      sym_comment,
      sym_macro_expansion,
  [3734] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(145), 2,
      sym_comment,
      sym_macro_expansion,
  [3751] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(146), 2,
      sym_comment,
      sym_macro_expansion,
  [3768] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(147), 2,
      sym_comment,
      sym_macro_expansion,
  [3785] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    STATE(148), 2,
      sym_comment,
      sym_macro_expansion,
  [3802] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(149), 2,
      sym_comment,
      sym_macro_expansion,
  [3819] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(487), 1,
      sym__macro_expansion_inner,
    STATE(150), 2,
      sym_comment,
      sym_macro_expansion,
  [3836] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(151), 2,
      sym_comment,
      sym_macro_expansion,
  [3853] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(152), 2,
      sym_comment,
      sym_macro_expansion,
  [3870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    STATE(153), 2,
      sym_comment,
      sym_macro_expansion,
  [3887] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(493), 1,
      aux_sym_ccode_token1,
    STATE(154), 2,
      sym_comment,
      sym_macro_expansion,
  [3904] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(155), 2,
      sym_comment,
      sym_macro_expansion,
  [3921] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    STATE(156), 2,
      sym_comment,
      sym_macro_expansion,
  [3938] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(157), 2,
      sym_comment,
      sym_macro_expansion,
  [3955] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(158), 2,
      sym_comment,
      sym_macro_expansion,
  [3972] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(159), 2,
      sym_comment,
      sym_macro_expansion,
  [3989] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    STATE(160), 2,
      sym_comment,
      sym_macro_expansion,
  [4006] = 5,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(507), 1,
      sym__macro_expansion_inner,
    STATE(161), 2,
      sym_comment,
      sym_macro_expansion,
  [4023] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    STATE(162), 2,
      sym_comment,
      sym_macro_expansion,
  [4040] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(163), 2,
      sym_comment,
      sym_macro_expansion,
  [4057] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(164), 2,
      sym_comment,
      sym_macro_expansion,
  [4074] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(165), 2,
      sym_comment,
      sym_macro_expansion,
  [4091] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(166), 2,
      sym_comment,
      sym_macro_expansion,
  [4108] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(167), 2,
      sym_comment,
      sym_macro_expansion,
  [4125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(168), 2,
      sym_comment,
      sym_macro_expansion,
  [4142] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(169), 2,
      sym_comment,
      sym_macro_expansion,
  [4159] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(170), 2,
      sym_comment,
      sym_macro_expansion,
  [4176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(171), 2,
      sym_comment,
      sym_macro_expansion,
  [4193] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(172), 2,
      sym_comment,
      sym_macro_expansion,
  [4210] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(173), 2,
      sym_comment,
      sym_macro_expansion,
  [4227] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(174), 2,
      sym_comment,
      sym_macro_expansion,
  [4244] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    STATE(175), 2,
      sym_comment,
      sym_macro_expansion,
  [4261] = 1,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
  [4265] = 1,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 152,
  [SMALL_STATE(5)] = 193,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 275,
  [SMALL_STATE(8)] = 315,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 419,
  [SMALL_STATE(12)] = 452,
  [SMALL_STATE(13)] = 485,
  [SMALL_STATE(14)] = 518,
  [SMALL_STATE(15)] = 551,
  [SMALL_STATE(16)] = 584,
  [SMALL_STATE(17)] = 617,
  [SMALL_STATE(18)] = 650,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 716,
  [SMALL_STATE(21)] = 749,
  [SMALL_STATE(22)] = 782,
  [SMALL_STATE(23)] = 815,
  [SMALL_STATE(24)] = 848,
  [SMALL_STATE(25)] = 881,
  [SMALL_STATE(26)] = 914,
  [SMALL_STATE(27)] = 947,
  [SMALL_STATE(28)] = 989,
  [SMALL_STATE(29)] = 1031,
  [SMALL_STATE(30)] = 1067,
  [SMALL_STATE(31)] = 1105,
  [SMALL_STATE(32)] = 1143,
  [SMALL_STATE(33)] = 1177,
  [SMALL_STATE(34)] = 1211,
  [SMALL_STATE(35)] = 1243,
  [SMALL_STATE(36)] = 1276,
  [SMALL_STATE(37)] = 1311,
  [SMALL_STATE(38)] = 1346,
  [SMALL_STATE(39)] = 1379,
  [SMALL_STATE(40)] = 1414,
  [SMALL_STATE(41)] = 1449,
  [SMALL_STATE(42)] = 1479,
  [SMALL_STATE(43)] = 1507,
  [SMALL_STATE(44)] = 1537,
  [SMALL_STATE(45)] = 1566,
  [SMALL_STATE(46)] = 1595,
  [SMALL_STATE(47)] = 1616,
  [SMALL_STATE(48)] = 1637,
  [SMALL_STATE(49)] = 1666,
  [SMALL_STATE(50)] = 1695,
  [SMALL_STATE(51)] = 1724,
  [SMALL_STATE(52)] = 1745,
  [SMALL_STATE(53)] = 1766,
  [SMALL_STATE(54)] = 1795,
  [SMALL_STATE(55)] = 1822,
  [SMALL_STATE(56)] = 1849,
  [SMALL_STATE(57)] = 1878,
  [SMALL_STATE(58)] = 1905,
  [SMALL_STATE(59)] = 1934,
  [SMALL_STATE(60)] = 1963,
  [SMALL_STATE(61)] = 1989,
  [SMALL_STATE(62)] = 2015,
  [SMALL_STATE(63)] = 2041,
  [SMALL_STATE(64)] = 2067,
  [SMALL_STATE(65)] = 2087,
  [SMALL_STATE(66)] = 2113,
  [SMALL_STATE(67)] = 2137,
  [SMALL_STATE(68)] = 2163,
  [SMALL_STATE(69)] = 2185,
  [SMALL_STATE(70)] = 2207,
  [SMALL_STATE(71)] = 2233,
  [SMALL_STATE(72)] = 2259,
  [SMALL_STATE(73)] = 2285,
  [SMALL_STATE(74)] = 2311,
  [SMALL_STATE(75)] = 2337,
  [SMALL_STATE(76)] = 2363,
  [SMALL_STATE(77)] = 2389,
  [SMALL_STATE(78)] = 2415,
  [SMALL_STATE(79)] = 2441,
  [SMALL_STATE(80)] = 2467,
  [SMALL_STATE(81)] = 2493,
  [SMALL_STATE(82)] = 2519,
  [SMALL_STATE(83)] = 2545,
  [SMALL_STATE(84)] = 2571,
  [SMALL_STATE(85)] = 2591,
  [SMALL_STATE(86)] = 2611,
  [SMALL_STATE(87)] = 2637,
  [SMALL_STATE(88)] = 2663,
  [SMALL_STATE(89)] = 2683,
  [SMALL_STATE(90)] = 2709,
  [SMALL_STATE(91)] = 2735,
  [SMALL_STATE(92)] = 2761,
  [SMALL_STATE(93)] = 2787,
  [SMALL_STATE(94)] = 2813,
  [SMALL_STATE(95)] = 2833,
  [SMALL_STATE(96)] = 2859,
  [SMALL_STATE(97)] = 2878,
  [SMALL_STATE(98)] = 2897,
  [SMALL_STATE(99)] = 2916,
  [SMALL_STATE(100)] = 2935,
  [SMALL_STATE(101)] = 2954,
  [SMALL_STATE(102)] = 2973,
  [SMALL_STATE(103)] = 2992,
  [SMALL_STATE(104)] = 3013,
  [SMALL_STATE(105)] = 3032,
  [SMALL_STATE(106)] = 3051,
  [SMALL_STATE(107)] = 3070,
  [SMALL_STATE(108)] = 3091,
  [SMALL_STATE(109)] = 3109,
  [SMALL_STATE(110)] = 3129,
  [SMALL_STATE(111)] = 3149,
  [SMALL_STATE(112)] = 3167,
  [SMALL_STATE(113)] = 3185,
  [SMALL_STATE(114)] = 3203,
  [SMALL_STATE(115)] = 3223,
  [SMALL_STATE(116)] = 3241,
  [SMALL_STATE(117)] = 3258,
  [SMALL_STATE(118)] = 3275,
  [SMALL_STATE(119)] = 3292,
  [SMALL_STATE(120)] = 3309,
  [SMALL_STATE(121)] = 3326,
  [SMALL_STATE(122)] = 3343,
  [SMALL_STATE(123)] = 3360,
  [SMALL_STATE(124)] = 3377,
  [SMALL_STATE(125)] = 3394,
  [SMALL_STATE(126)] = 3411,
  [SMALL_STATE(127)] = 3428,
  [SMALL_STATE(128)] = 3445,
  [SMALL_STATE(129)] = 3462,
  [SMALL_STATE(130)] = 3479,
  [SMALL_STATE(131)] = 3496,
  [SMALL_STATE(132)] = 3513,
  [SMALL_STATE(133)] = 3530,
  [SMALL_STATE(134)] = 3547,
  [SMALL_STATE(135)] = 3564,
  [SMALL_STATE(136)] = 3581,
  [SMALL_STATE(137)] = 3598,
  [SMALL_STATE(138)] = 3615,
  [SMALL_STATE(139)] = 3632,
  [SMALL_STATE(140)] = 3649,
  [SMALL_STATE(141)] = 3666,
  [SMALL_STATE(142)] = 3683,
  [SMALL_STATE(143)] = 3700,
  [SMALL_STATE(144)] = 3717,
  [SMALL_STATE(145)] = 3734,
  [SMALL_STATE(146)] = 3751,
  [SMALL_STATE(147)] = 3768,
  [SMALL_STATE(148)] = 3785,
  [SMALL_STATE(149)] = 3802,
  [SMALL_STATE(150)] = 3819,
  [SMALL_STATE(151)] = 3836,
  [SMALL_STATE(152)] = 3853,
  [SMALL_STATE(153)] = 3870,
  [SMALL_STATE(154)] = 3887,
  [SMALL_STATE(155)] = 3904,
  [SMALL_STATE(156)] = 3921,
  [SMALL_STATE(157)] = 3938,
  [SMALL_STATE(158)] = 3955,
  [SMALL_STATE(159)] = 3972,
  [SMALL_STATE(160)] = 3989,
  [SMALL_STATE(161)] = 4006,
  [SMALL_STATE(162)] = 4023,
  [SMALL_STATE(163)] = 4040,
  [SMALL_STATE(164)] = 4057,
  [SMALL_STATE(165)] = 4074,
  [SMALL_STATE(166)] = 4091,
  [SMALL_STATE(167)] = 4108,
  [SMALL_STATE(168)] = 4125,
  [SMALL_STATE(169)] = 4142,
  [SMALL_STATE(170)] = 4159,
  [SMALL_STATE(171)] = 4176,
  [SMALL_STATE(172)] = 4193,
  [SMALL_STATE(173)] = 4210,
  [SMALL_STATE(174)] = 4227,
  [SMALL_STATE(175)] = 4244,
  [SMALL_STATE(176)] = 4261,
  [SMALL_STATE(177)] = 4265,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_definition, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_definition, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 8, .production_id = 7),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 8, .production_id = 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_statement, 6, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_statement, 6, .production_id = 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_support_declaration, 10, .production_id = 8),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_support_declaration, 10, .production_id = 8),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 9, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 9, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(82),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(117),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(118),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(119),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(82),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(153),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(110),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(36),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(6),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(69),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(69),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(68),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(82),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(156),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 10),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 11),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 6, .production_id = 11),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(59),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(98),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(69),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(69),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(58),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(100),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2), SHIFT_REPEAT(109),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdef, 2, .production_id = 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ccode, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 9, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 8, .production_id = 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_choice, 6, .production_id = 9),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 2, .production_id = 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_descriptor, 4, .production_id = 12),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_name, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 4, .production_id = 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [471] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_item, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
