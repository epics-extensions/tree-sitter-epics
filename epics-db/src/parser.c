#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 184
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_link = 17,
  anon_sym_registrar = 18,
  anon_sym_variable = 19,
  anon_sym_function = 20,
  anon_sym_breaktable = 21,
  sym_double = 22,
  anon_sym_record = 23,
  anon_sym_grecord = 24,
  anon_sym_alias = 25,
  anon_sym_info = 26,
  anon_sym_POUND = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_text_fragment_token1 = 29,
  anon_sym_BSLASH = 30,
  sym_escape_sequence = 31,
  anon_sym_null = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  aux_sym__json_object_token1 = 35,
  anon_sym_LBRACK = 36,
  aux_sym__json_array_token1 = 37,
  anon_sym_RBRACK = 38,
  sym__unquoted_string = 39,
  anon_sym_DOLLAR_LBRACE = 40,
  anon_sym_DOLLAR_LPAREN = 41,
  sym__macro_expansion_inner = 42,
  sym_source_file = 43,
  sym__statements = 44,
  sym_path_definition = 45,
  sym_include_statement = 46,
  sym_menu_definition = 47,
  sym_menu_choice = 48,
  sym_record_type_definition = 49,
  sym_field_definition = 50,
  sym_field_descriptor = 51,
  sym_cdef = 52,
  sym_ccode = 53,
  sym_device_support_declaration = 54,
  sym_driver_declaration = 55,
  sym_link_declaration = 56,
  sym_registrar_declaration = 57,
  sym_variable_declaration = 58,
  sym_function_declaration = 59,
  sym_breakpoint_table = 60,
  sym_breakpoint_item = 61,
  sym_record_instance = 62,
  sym_alias = 63,
  sym_field = 64,
  sym_info = 65,
  sym_alias_statement = 66,
  sym_comment = 67,
  sym_string = 68,
  sym__string = 69,
  sym_string_text_fragment = 70,
  sym_json_value = 71,
  sym__json_object = 72,
  sym__json_array = 73,
  sym_record_type = 74,
  sym_record_name = 75,
  sym_field_item = 76,
  sym_field_name = 77,
  sym_macro_expansion = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_menu_definition_repeat1 = 80,
  aux_sym_record_type_definition_repeat1 = 81,
  aux_sym_field_definition_repeat1 = 82,
  aux_sym_breakpoint_table_repeat1 = 83,
  aux_sym_record_instance_repeat1 = 84,
  aux_sym__string_repeat1 = 85,
  aux_sym_string_text_fragment_repeat1 = 86,
  aux_sym__json_object_repeat1 = 87,
  aux_sym__json_array_repeat1 = 88,
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
  [anon_sym_link] = "link",
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
  [sym_link_declaration] = "link_declaration",
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
  [anon_sym_link] = anon_sym_link,
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
  [sym_link_declaration] = sym_link_declaration,
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
  [anon_sym_link] = {
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
  [sym_link_declaration] = {
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
  field_jlif_name = 6,
  field_link_type = 7,
  field_name = 8,
  field_raw_value = 9,
  field_record_name = 10,
  field_record_type = 11,
  field_string = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_choice] = "choice",
  [field_code] = "code",
  [field_dset_name] = "dset_name",
  [field_eng_value] = "eng_value",
  [field_jlif_name] = "jlif_name",
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
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 4},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_jlif_name, 4},
    {field_name, 2},
  [3] =
    {field_name, 2},
    {field_type, 4},
  [5] =
    {field_name, 4},
    {field_type, 2},
  [7] =
    {field_alias_name, 4},
    {field_record_name, 2},
  [9] =
    {field_code, 1},
  [10] =
    {field_eng_value, 1},
    {field_raw_value, 0},
  [12] =
    {field_eng_value, 2},
    {field_raw_value, 0},
  [14] =
    {field_choice, 8},
    {field_dset_name, 6},
    {field_link_type, 4},
    {field_record_type, 2},
  [18] =
    {field_name, 2},
    {field_string, 4},
  [20] =
    {field_alias_name, 2},
  [21] =
    {field_name, 2},
    {field_value, 4},
  [23] =
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
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '{') ADVANCE(132);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '}') ADVANCE(133);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_addpath);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_recordtype);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_driver);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_registrar);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_breaktable);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_grecord);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'x') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '(') ADVANCE(200);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
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
  [4] = {.lex_state = 124},
  [5] = {.lex_state = 124},
  [6] = {.lex_state = 124},
  [7] = {.lex_state = 124},
  [8] = {.lex_state = 124},
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 124},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 124},
  [58] = {.lex_state = 124},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 139},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 139},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
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
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {(TSStateId)(-1)},
  [183] = {(TSStateId)(-1)},
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
    [anon_sym_link] = ACTIONS(1),
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
    [sym_source_file] = STATE(147),
    [sym__statements] = STATE(22),
    [sym_path_definition] = STATE(23),
    [sym_include_statement] = STATE(23),
    [sym_menu_definition] = STATE(23),
    [sym_record_type_definition] = STATE(23),
    [sym_device_support_declaration] = STATE(23),
    [sym_driver_declaration] = STATE(23),
    [sym_link_declaration] = STATE(23),
    [sym_registrar_declaration] = STATE(23),
    [sym_variable_declaration] = STATE(23),
    [sym_function_declaration] = STATE(23),
    [sym_breakpoint_table] = STATE(23),
    [sym_record_instance] = STATE(23),
    [sym_alias_statement] = STATE(23),
    [sym_comment] = STATE(1),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_path] = ACTIONS(11),
    [anon_sym_addpath] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_menu] = ACTIONS(15),
    [anon_sym_recordtype] = ACTIONS(17),
    [anon_sym_device] = ACTIONS(19),
    [anon_sym_driver] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(23),
    [anon_sym_registrar] = ACTIONS(25),
    [anon_sym_variable] = ACTIONS(27),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_breaktable] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_grecord] = ACTIONS(35),
    [anon_sym_alias] = ACTIONS(37),
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
      anon_sym_link,
    ACTIONS(62), 1,
      anon_sym_registrar,
    ACTIONS(65), 1,
      anon_sym_variable,
    ACTIONS(68), 1,
      anon_sym_function,
    ACTIONS(71), 1,
      anon_sym_breaktable,
    ACTIONS(74), 1,
      anon_sym_record,
    ACTIONS(77), 1,
      anon_sym_grecord,
    ACTIONS(80), 1,
      anon_sym_alias,
    STATE(22), 1,
      sym__statements,
    ACTIONS(41), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(2), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
    STATE(23), 13,
      sym_path_definition,
      sym_include_statement,
      sym_menu_definition,
      sym_record_type_definition,
      sym_device_support_declaration,
      sym_driver_declaration,
      sym_link_declaration,
      sym_registrar_declaration,
      sym_variable_declaration,
      sym_function_declaration,
      sym_breakpoint_table,
      sym_record_instance,
      sym_alias_statement,
  [79] = 22,
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
      anon_sym_link,
    ACTIONS(25), 1,
      anon_sym_registrar,
    ACTIONS(27), 1,
      anon_sym_variable,
    ACTIONS(29), 1,
      anon_sym_function,
    ACTIONS(31), 1,
      anon_sym_breaktable,
    ACTIONS(33), 1,
      anon_sym_record,
    ACTIONS(35), 1,
      anon_sym_grecord,
    ACTIONS(37), 1,
      anon_sym_alias,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(22), 1,
      sym__statements,
    ACTIONS(11), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(3), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(23), 13,
      sym_path_definition,
      sym_include_statement,
      sym_menu_definition,
      sym_record_type_definition,
      sym_device_support_declaration,
      sym_driver_declaration,
      sym_link_declaration,
      sym_registrar_declaration,
      sym_variable_declaration,
      sym_function_declaration,
      sym_breakpoint_table,
      sym_record_instance,
      sym_alias_statement,
  [160] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(87), 1,
      anon_sym_record,
    STATE(4), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(85), 23,
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
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [202] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(91), 1,
      anon_sym_record,
    STATE(5), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(89), 23,
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
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [244] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(95), 1,
      anon_sym_record,
    STATE(6), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(93), 23,
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
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [286] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(99), 1,
      anon_sym_record,
    STATE(7), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(97), 22,
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
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [327] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(103), 1,
      anon_sym_record,
    STATE(8), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(101), 20,
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
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [366] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_record,
    STATE(9), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(105), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [403] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(113), 1,
      anon_sym_record,
    STATE(10), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [437] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(117), 1,
      anon_sym_record,
    STATE(11), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(115), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [471] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(121), 1,
      anon_sym_record,
    STATE(12), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(119), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [505] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(125), 1,
      anon_sym_record,
    STATE(13), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [539] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(129), 1,
      anon_sym_record,
    STATE(14), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(127), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [573] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(133), 1,
      anon_sym_record,
    STATE(15), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(131), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [607] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(137), 1,
      anon_sym_record,
    STATE(16), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [641] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(141), 1,
      anon_sym_record,
    STATE(17), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(139), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [675] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(145), 1,
      anon_sym_record,
    STATE(18), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(143), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [709] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(149), 1,
      anon_sym_record,
    STATE(19), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(147), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [743] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(153), 1,
      anon_sym_record,
    STATE(20), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [777] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(157), 1,
      anon_sym_record,
    STATE(21), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(155), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [811] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(161), 1,
      anon_sym_record,
    STATE(22), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(159), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [845] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(165), 1,
      anon_sym_record,
    STATE(23), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(163), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [879] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(169), 1,
      anon_sym_record,
    STATE(24), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(167), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [913] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(173), 1,
      anon_sym_record,
    STATE(25), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(171), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [947] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(177), 1,
      anon_sym_record,
    STATE(26), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(175), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [981] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(181), 1,
      anon_sym_record,
    STATE(27), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(179), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [1015] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(185), 1,
      anon_sym_record,
    STATE(28), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(183), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [1049] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(29), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(150), 2,
      sym__json_object,
      sym__json_array,
    STATE(153), 2,
      sym_string,
      sym_json_value,
    ACTIONS(191), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [1091] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(30), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(150), 2,
      sym__json_object,
      sym__json_array,
    STATE(152), 2,
      sym_string,
      sym_json_value,
    ACTIONS(191), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [1133] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_field,
    ACTIONS(201), 1,
      anon_sym_alias,
    ACTIONS(203), 1,
      anon_sym_info,
    STATE(33), 1,
      aux_sym_record_instance_repeat1,
    STATE(31), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(52), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1171] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(205), 1,
      anon_sym_include,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      anon_sym_field,
    ACTIONS(213), 1,
      anon_sym_alias,
    ACTIONS(216), 1,
      anon_sym_info,
    STATE(32), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_instance_repeat1,
    STATE(52), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1207] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_field,
    ACTIONS(201), 1,
      anon_sym_alias,
    ACTIONS(203), 1,
      anon_sym_info,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_record_instance_repeat1,
    STATE(33), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(52), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1245] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      anon_sym_field,
    ACTIONS(225), 1,
      anon_sym_PERCENT,
    STATE(36), 1,
      aux_sym_record_type_definition_repeat1,
    STATE(34), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(62), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1279] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(223), 1,
      anon_sym_field,
    ACTIONS(225), 1,
      anon_sym_PERCENT,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_record_type_definition_repeat1,
    STATE(35), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(62), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1313] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(229), 1,
      anon_sym_include,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      anon_sym_field,
    ACTIONS(237), 1,
      anon_sym_PERCENT,
    STATE(36), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_type_definition_repeat1,
    STATE(62), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1345] = 11,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      sym_escape_sequence,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(38), 1,
      aux_sym__string_repeat1,
    STATE(47), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(96), 1,
      sym_string_text_fragment,
    STATE(37), 2,
      sym_comment,
      sym_macro_expansion,
  [1380] = 10,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(262), 1,
      sym_escape_sequence,
    STATE(47), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(96), 1,
      sym_string_text_fragment,
    STATE(38), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__string_repeat1,
  [1413] = 11,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      sym_escape_sequence,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym__string_repeat1,
    STATE(47), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(96), 1,
      sym_string_text_fragment,
    STATE(39), 2,
      sym_comment,
      sym_macro_expansion,
  [1448] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(41), 1,
      aux_sym_field_definition_repeat1,
    STATE(103), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(40), 2,
      sym_comment,
      sym_macro_expansion,
  [1483] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      sym__unquoted_string,
    STATE(103), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(41), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_field_definition_repeat1,
  [1516] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_field_definition_repeat1,
    STATE(103), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(42), 2,
      sym_comment,
      sym_macro_expansion,
  [1551] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(281), 1,
      anon_sym_include,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      anon_sym_choice,
    STATE(100), 2,
      sym_include_statement,
      sym_menu_choice,
    STATE(43), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_menu_definition_repeat1,
  [1579] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      anon_sym_choice,
    STATE(45), 1,
      aux_sym_menu_definition_repeat1,
    STATE(44), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(100), 2,
      sym_include_statement,
      sym_menu_choice,
  [1609] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(291), 1,
      anon_sym_choice,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_menu_definition_repeat1,
    STATE(45), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(100), 2,
      sym_include_statement,
      sym_menu_choice,
  [1639] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      aux_sym__json_object_token1,
    STATE(61), 1,
      aux_sym__json_object_repeat1,
    STATE(104), 1,
      sym__json_object,
    STATE(46), 2,
      sym_comment,
      sym_macro_expansion,
  [1668] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_escape_sequence,
    STATE(49), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(47), 2,
      sym_comment,
      sym_macro_expansion,
  [1697] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      aux_sym__json_object_token1,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym__json_object_repeat1,
    STATE(104), 1,
      sym__json_object,
    STATE(48), 2,
      sym_comment,
      sym_macro_expansion,
  [1726] = 8,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(312), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_escape_sequence,
    STATE(49), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_text_fragment_repeat1,
  [1753] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(50), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(317), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1774] = 8,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      aux_sym__json_array_token1,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym__json_array,
    STATE(51), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_array_repeat1,
  [1801] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(52), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(327), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1822] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      aux_sym__json_array_token1,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__json_array_repeat1,
    STATE(105), 1,
      sym__json_array,
    STATE(53), 2,
      sym_comment,
      sym_macro_expansion,
  [1851] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      aux_sym__json_array_token1,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym__json_array_repeat1,
    STATE(105), 1,
      sym__json_array,
    STATE(54), 2,
      sym_comment,
      sym_macro_expansion,
  [1880] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      aux_sym__json_object_token1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__json_object_repeat1,
    STATE(104), 1,
      sym__json_object,
    STATE(55), 2,
      sym_comment,
      sym_macro_expansion,
  [1909] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      aux_sym__json_array_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym__json_array_repeat1,
    STATE(105), 1,
      sym__json_array,
    STATE(56), 2,
      sym_comment,
      sym_macro_expansion,
  [1938] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(57), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(341), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1959] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(58), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(343), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1980] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      aux_sym__json_array_token1,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym__json_array_repeat1,
    STATE(105), 1,
      sym__json_array,
    STATE(59), 2,
      sym_comment,
      sym_macro_expansion,
  [2009] = 8,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      aux_sym__json_object_token1,
    STATE(104), 1,
      sym__json_object,
    STATE(60), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_object_repeat1,
  [2036] = 9,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      aux_sym__json_object_token1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__json_object_repeat1,
    STATE(104), 1,
      sym__json_object,
    STATE(61), 2,
      sym_comment,
      sym_macro_expansion,
  [2065] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(62), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(357), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2085] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(122), 1,
      sym_field_name,
    STATE(151), 1,
      sym__string,
    STATE(63), 2,
      sym_comment,
      sym_macro_expansion,
  [2111] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(27), 1,
      sym_string,
    STATE(64), 2,
      sym_comment,
      sym_macro_expansion,
  [2137] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(8), 1,
      sym_string,
    STATE(65), 2,
      sym_comment,
      sym_macro_expansion,
  [2163] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(130), 1,
      sym_string,
    STATE(66), 2,
      sym_comment,
      sym_macro_expansion,
  [2189] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(179), 1,
      sym_string,
    STATE(67), 2,
      sym_comment,
      sym_macro_expansion,
  [2215] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(178), 1,
      sym_string,
    STATE(68), 2,
      sym_comment,
      sym_macro_expansion,
  [2241] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      sym_double,
    STATE(112), 1,
      sym_breakpoint_item,
    STATE(69), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_breakpoint_table_repeat1,
  [2265] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(117), 1,
      sym_string,
    STATE(70), 2,
      sym_comment,
      sym_macro_expansion,
  [2291] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(180), 1,
      sym_string,
    STATE(71), 2,
      sym_comment,
      sym_macro_expansion,
  [2317] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(72), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(364), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2337] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(118), 1,
      sym__string,
    STATE(181), 1,
      sym_record_type,
    STATE(73), 2,
      sym_comment,
      sym_macro_expansion,
  [2363] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(174), 1,
      sym_string,
    STATE(74), 2,
      sym_comment,
      sym_macro_expansion,
  [2389] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(177), 1,
      sym_string,
    STATE(75), 2,
      sym_comment,
      sym_macro_expansion,
  [2415] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(176), 1,
      sym_string,
    STATE(76), 2,
      sym_comment,
      sym_macro_expansion,
  [2441] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(155), 1,
      sym_string,
    STATE(77), 2,
      sym_comment,
      sym_macro_expansion,
  [2467] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(154), 1,
      sym_string,
    STATE(78), 2,
      sym_comment,
      sym_macro_expansion,
  [2493] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(143), 1,
      sym_string,
    STATE(79), 2,
      sym_comment,
      sym_macro_expansion,
  [2519] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(80), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(366), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2539] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(116), 1,
      sym__string,
    STATE(136), 1,
      sym_record_name,
    STATE(81), 2,
      sym_comment,
      sym_macro_expansion,
  [2565] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(116), 1,
      sym__string,
    STATE(135), 1,
      sym_record_name,
    STATE(82), 2,
      sym_comment,
      sym_macro_expansion,
  [2591] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(83), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(368), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2611] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(84), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(370), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2631] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(131), 1,
      sym_string,
    STATE(85), 2,
      sym_comment,
      sym_macro_expansion,
  [2657] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym_double,
    STATE(99), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(112), 1,
      sym_breakpoint_item,
    STATE(86), 2,
      sym_comment,
      sym_macro_expansion,
  [2683] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(118), 1,
      sym__string,
    STATE(123), 1,
      sym_record_type,
    STATE(87), 2,
      sym_comment,
      sym_macro_expansion,
  [2709] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(142), 1,
      sym_string,
    STATE(88), 2,
      sym_comment,
      sym_macro_expansion,
  [2735] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(116), 1,
      sym__string,
    STATE(141), 1,
      sym_record_name,
    STATE(89), 2,
      sym_comment,
      sym_macro_expansion,
  [2761] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(118), 1,
      sym__string,
    STATE(175), 1,
      sym_record_type,
    STATE(90), 2,
      sym_comment,
      sym_macro_expansion,
  [2787] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(140), 1,
      sym_field_name,
    STATE(151), 1,
      sym__string,
    STATE(91), 2,
      sym_comment,
      sym_macro_expansion,
  [2813] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(116), 1,
      sym__string,
    STATE(168), 1,
      sym_record_name,
    STATE(92), 2,
      sym_comment,
      sym_macro_expansion,
  [2839] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(128), 1,
      sym_string,
    STATE(93), 2,
      sym_comment,
      sym_macro_expansion,
  [2865] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(126), 1,
      sym_string,
    STATE(94), 2,
      sym_comment,
      sym_macro_expansion,
  [2891] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(138), 1,
      sym_string,
    STATE(95), 2,
      sym_comment,
      sym_macro_expansion,
  [2917] = 6,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(376), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(378), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(96), 2,
      sym_comment,
      sym_macro_expansion,
  [2939] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(137), 1,
      sym_string,
    STATE(97), 2,
      sym_comment,
      sym_macro_expansion,
  [2965] = 6,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(380), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(382), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(98), 2,
      sym_comment,
      sym_macro_expansion,
  [2987] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(374), 1,
      sym_double,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(112), 1,
      sym_breakpoint_item,
    STATE(99), 2,
      sym_comment,
      sym_macro_expansion,
  [3013] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(100), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(386), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [3032] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(388), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(101), 2,
      sym_comment,
      sym_macro_expansion,
  [3053] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(102), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(392), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [3072] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(103), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(394), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3091] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(104), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(396), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3110] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(105), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(398), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3129] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(106), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(400), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3148] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(402), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(107), 2,
      sym_comment,
      sym_macro_expansion,
  [3169] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(108), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(406), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3188] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(109), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(408), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3207] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(110), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(410), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3226] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(111), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(412), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3245] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(414), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(112), 2,
      sym_comment,
      sym_macro_expansion,
  [3263] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      sym_double,
    STATE(113), 2,
      sym_comment,
      sym_macro_expansion,
  [3283] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(114), 2,
      sym_comment,
      sym_macro_expansion,
  [3301] = 6,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(422), 1,
      aux_sym_ccode_token1,
    STATE(80), 1,
      sym_ccode,
    STATE(115), 2,
      sym_comment,
      sym_macro_expansion,
  [3321] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(424), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(116), 2,
      sym_comment,
      sym_macro_expansion,
  [3339] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(117), 2,
      sym_comment,
      sym_macro_expansion,
  [3359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(430), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(118), 2,
      sym_comment,
      sym_macro_expansion,
  [3377] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(119), 2,
      sym_comment,
      sym_macro_expansion,
  [3395] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(120), 2,
      sym_comment,
      sym_macro_expansion,
  [3412] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(436), 1,
      anon_sym_LPAREN,
    STATE(121), 2,
      sym_comment,
      sym_macro_expansion,
  [3429] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(122), 2,
      sym_comment,
      sym_macro_expansion,
  [3446] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(123), 2,
      sym_comment,
      sym_macro_expansion,
  [3463] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(124), 2,
      sym_comment,
      sym_macro_expansion,
  [3480] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(125), 2,
      sym_comment,
      sym_macro_expansion,
  [3497] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(126), 2,
      sym_comment,
      sym_macro_expansion,
  [3514] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(448), 1,
      sym_double,
    STATE(127), 2,
      sym_comment,
      sym_macro_expansion,
  [3531] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(128), 2,
      sym_comment,
      sym_macro_expansion,
  [3548] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(452), 1,
      sym__macro_expansion_inner,
    STATE(129), 2,
      sym_comment,
      sym_macro_expansion,
  [3565] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(130), 2,
      sym_comment,
      sym_macro_expansion,
  [3582] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(131), 2,
      sym_comment,
      sym_macro_expansion,
  [3599] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(458), 1,
      aux_sym_ccode_token1,
    STATE(132), 2,
      sym_comment,
      sym_macro_expansion,
  [3616] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(133), 2,
      sym_comment,
      sym_macro_expansion,
  [3633] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(134), 2,
      sym_comment,
      sym_macro_expansion,
  [3650] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(135), 2,
      sym_comment,
      sym_macro_expansion,
  [3667] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(136), 2,
      sym_comment,
      sym_macro_expansion,
  [3684] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(137), 2,
      sym_comment,
      sym_macro_expansion,
  [3701] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(138), 2,
      sym_comment,
      sym_macro_expansion,
  [3718] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(139), 2,
      sym_comment,
      sym_macro_expansion,
  [3735] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(140), 2,
      sym_comment,
      sym_macro_expansion,
  [3752] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(141), 2,
      sym_comment,
      sym_macro_expansion,
  [3769] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(142), 2,
      sym_comment,
      sym_macro_expansion,
  [3786] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(143), 2,
      sym_comment,
      sym_macro_expansion,
  [3803] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(144), 2,
      sym_comment,
      sym_macro_expansion,
  [3820] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(145), 2,
      sym_comment,
      sym_macro_expansion,
  [3837] = 5,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(484), 1,
      sym__macro_expansion_inner,
    STATE(146), 2,
      sym_comment,
      sym_macro_expansion,
  [3854] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    STATE(147), 2,
      sym_comment,
      sym_macro_expansion,
  [3871] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(148), 2,
      sym_comment,
      sym_macro_expansion,
  [3888] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    STATE(149), 2,
      sym_comment,
      sym_macro_expansion,
  [3905] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(150), 2,
      sym_comment,
      sym_macro_expansion,
  [3922] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(151), 2,
      sym_comment,
      sym_macro_expansion,
  [3939] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(152), 2,
      sym_comment,
      sym_macro_expansion,
  [3956] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(153), 2,
      sym_comment,
      sym_macro_expansion,
  [3973] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(154), 2,
      sym_comment,
      sym_macro_expansion,
  [3990] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(155), 2,
      sym_comment,
      sym_macro_expansion,
  [4007] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    STATE(156), 2,
      sym_comment,
      sym_macro_expansion,
  [4024] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(157), 2,
      sym_comment,
      sym_macro_expansion,
  [4041] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    STATE(158), 2,
      sym_comment,
      sym_macro_expansion,
  [4058] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(159), 2,
      sym_comment,
      sym_macro_expansion,
  [4075] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    STATE(160), 2,
      sym_comment,
      sym_macro_expansion,
  [4092] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    STATE(161), 2,
      sym_comment,
      sym_macro_expansion,
  [4109] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(162), 2,
      sym_comment,
      sym_macro_expansion,
  [4126] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(163), 2,
      sym_comment,
      sym_macro_expansion,
  [4143] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(164), 2,
      sym_comment,
      sym_macro_expansion,
  [4160] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    STATE(165), 2,
      sym_comment,
      sym_macro_expansion,
  [4177] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
    STATE(166), 2,
      sym_comment,
      sym_macro_expansion,
  [4194] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(167), 2,
      sym_comment,
      sym_macro_expansion,
  [4211] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(168), 2,
      sym_comment,
      sym_macro_expansion,
  [4228] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    STATE(169), 2,
      sym_comment,
      sym_macro_expansion,
  [4245] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(170), 2,
      sym_comment,
      sym_macro_expansion,
  [4262] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(171), 2,
      sym_comment,
      sym_macro_expansion,
  [4279] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(172), 2,
      sym_comment,
      sym_macro_expansion,
  [4296] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    STATE(173), 2,
      sym_comment,
      sym_macro_expansion,
  [4313] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(174), 2,
      sym_comment,
      sym_macro_expansion,
  [4330] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(175), 2,
      sym_comment,
      sym_macro_expansion,
  [4347] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(176), 2,
      sym_comment,
      sym_macro_expansion,
  [4364] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(177), 2,
      sym_comment,
      sym_macro_expansion,
  [4381] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(178), 2,
      sym_comment,
      sym_macro_expansion,
  [4398] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(179), 2,
      sym_comment,
      sym_macro_expansion,
  [4415] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(180), 2,
      sym_comment,
      sym_macro_expansion,
  [4432] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(181), 2,
      sym_comment,
      sym_macro_expansion,
  [4449] = 1,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
  [4453] = 1,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 202,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 327,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 403,
  [SMALL_STATE(11)] = 437,
  [SMALL_STATE(12)] = 471,
  [SMALL_STATE(13)] = 505,
  [SMALL_STATE(14)] = 539,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 641,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 709,
  [SMALL_STATE(20)] = 743,
  [SMALL_STATE(21)] = 777,
  [SMALL_STATE(22)] = 811,
  [SMALL_STATE(23)] = 845,
  [SMALL_STATE(24)] = 879,
  [SMALL_STATE(25)] = 913,
  [SMALL_STATE(26)] = 947,
  [SMALL_STATE(27)] = 981,
  [SMALL_STATE(28)] = 1015,
  [SMALL_STATE(29)] = 1049,
  [SMALL_STATE(30)] = 1091,
  [SMALL_STATE(31)] = 1133,
  [SMALL_STATE(32)] = 1171,
  [SMALL_STATE(33)] = 1207,
  [SMALL_STATE(34)] = 1245,
  [SMALL_STATE(35)] = 1279,
  [SMALL_STATE(36)] = 1313,
  [SMALL_STATE(37)] = 1345,
  [SMALL_STATE(38)] = 1380,
  [SMALL_STATE(39)] = 1413,
  [SMALL_STATE(40)] = 1448,
  [SMALL_STATE(41)] = 1483,
  [SMALL_STATE(42)] = 1516,
  [SMALL_STATE(43)] = 1551,
  [SMALL_STATE(44)] = 1579,
  [SMALL_STATE(45)] = 1609,
  [SMALL_STATE(46)] = 1639,
  [SMALL_STATE(47)] = 1668,
  [SMALL_STATE(48)] = 1697,
  [SMALL_STATE(49)] = 1726,
  [SMALL_STATE(50)] = 1753,
  [SMALL_STATE(51)] = 1774,
  [SMALL_STATE(52)] = 1801,
  [SMALL_STATE(53)] = 1822,
  [SMALL_STATE(54)] = 1851,
  [SMALL_STATE(55)] = 1880,
  [SMALL_STATE(56)] = 1909,
  [SMALL_STATE(57)] = 1938,
  [SMALL_STATE(58)] = 1959,
  [SMALL_STATE(59)] = 1980,
  [SMALL_STATE(60)] = 2009,
  [SMALL_STATE(61)] = 2036,
  [SMALL_STATE(62)] = 2065,
  [SMALL_STATE(63)] = 2085,
  [SMALL_STATE(64)] = 2111,
  [SMALL_STATE(65)] = 2137,
  [SMALL_STATE(66)] = 2163,
  [SMALL_STATE(67)] = 2189,
  [SMALL_STATE(68)] = 2215,
  [SMALL_STATE(69)] = 2241,
  [SMALL_STATE(70)] = 2265,
  [SMALL_STATE(71)] = 2291,
  [SMALL_STATE(72)] = 2317,
  [SMALL_STATE(73)] = 2337,
  [SMALL_STATE(74)] = 2363,
  [SMALL_STATE(75)] = 2389,
  [SMALL_STATE(76)] = 2415,
  [SMALL_STATE(77)] = 2441,
  [SMALL_STATE(78)] = 2467,
  [SMALL_STATE(79)] = 2493,
  [SMALL_STATE(80)] = 2519,
  [SMALL_STATE(81)] = 2539,
  [SMALL_STATE(82)] = 2565,
  [SMALL_STATE(83)] = 2591,
  [SMALL_STATE(84)] = 2611,
  [SMALL_STATE(85)] = 2631,
  [SMALL_STATE(86)] = 2657,
  [SMALL_STATE(87)] = 2683,
  [SMALL_STATE(88)] = 2709,
  [SMALL_STATE(89)] = 2735,
  [SMALL_STATE(90)] = 2761,
  [SMALL_STATE(91)] = 2787,
  [SMALL_STATE(92)] = 2813,
  [SMALL_STATE(93)] = 2839,
  [SMALL_STATE(94)] = 2865,
  [SMALL_STATE(95)] = 2891,
  [SMALL_STATE(96)] = 2917,
  [SMALL_STATE(97)] = 2939,
  [SMALL_STATE(98)] = 2965,
  [SMALL_STATE(99)] = 2987,
  [SMALL_STATE(100)] = 3013,
  [SMALL_STATE(101)] = 3032,
  [SMALL_STATE(102)] = 3053,
  [SMALL_STATE(103)] = 3072,
  [SMALL_STATE(104)] = 3091,
  [SMALL_STATE(105)] = 3110,
  [SMALL_STATE(106)] = 3129,
  [SMALL_STATE(107)] = 3148,
  [SMALL_STATE(108)] = 3169,
  [SMALL_STATE(109)] = 3188,
  [SMALL_STATE(110)] = 3207,
  [SMALL_STATE(111)] = 3226,
  [SMALL_STATE(112)] = 3245,
  [SMALL_STATE(113)] = 3263,
  [SMALL_STATE(114)] = 3283,
  [SMALL_STATE(115)] = 3301,
  [SMALL_STATE(116)] = 3321,
  [SMALL_STATE(117)] = 3339,
  [SMALL_STATE(118)] = 3359,
  [SMALL_STATE(119)] = 3377,
  [SMALL_STATE(120)] = 3395,
  [SMALL_STATE(121)] = 3412,
  [SMALL_STATE(122)] = 3429,
  [SMALL_STATE(123)] = 3446,
  [SMALL_STATE(124)] = 3463,
  [SMALL_STATE(125)] = 3480,
  [SMALL_STATE(126)] = 3497,
  [SMALL_STATE(127)] = 3514,
  [SMALL_STATE(128)] = 3531,
  [SMALL_STATE(129)] = 3548,
  [SMALL_STATE(130)] = 3565,
  [SMALL_STATE(131)] = 3582,
  [SMALL_STATE(132)] = 3599,
  [SMALL_STATE(133)] = 3616,
  [SMALL_STATE(134)] = 3633,
  [SMALL_STATE(135)] = 3650,
  [SMALL_STATE(136)] = 3667,
  [SMALL_STATE(137)] = 3684,
  [SMALL_STATE(138)] = 3701,
  [SMALL_STATE(139)] = 3718,
  [SMALL_STATE(140)] = 3735,
  [SMALL_STATE(141)] = 3752,
  [SMALL_STATE(142)] = 3769,
  [SMALL_STATE(143)] = 3786,
  [SMALL_STATE(144)] = 3803,
  [SMALL_STATE(145)] = 3820,
  [SMALL_STATE(146)] = 3837,
  [SMALL_STATE(147)] = 3854,
  [SMALL_STATE(148)] = 3871,
  [SMALL_STATE(149)] = 3888,
  [SMALL_STATE(150)] = 3905,
  [SMALL_STATE(151)] = 3922,
  [SMALL_STATE(152)] = 3939,
  [SMALL_STATE(153)] = 3956,
  [SMALL_STATE(154)] = 3973,
  [SMALL_STATE(155)] = 3990,
  [SMALL_STATE(156)] = 4007,
  [SMALL_STATE(157)] = 4024,
  [SMALL_STATE(158)] = 4041,
  [SMALL_STATE(159)] = 4058,
  [SMALL_STATE(160)] = 4075,
  [SMALL_STATE(161)] = 4092,
  [SMALL_STATE(162)] = 4109,
  [SMALL_STATE(163)] = 4126,
  [SMALL_STATE(164)] = 4143,
  [SMALL_STATE(165)] = 4160,
  [SMALL_STATE(166)] = 4177,
  [SMALL_STATE(167)] = 4194,
  [SMALL_STATE(168)] = 4211,
  [SMALL_STATE(169)] = 4228,
  [SMALL_STATE(170)] = 4245,
  [SMALL_STATE(171)] = 4262,
  [SMALL_STATE(172)] = 4279,
  [SMALL_STATE(173)] = 4296,
  [SMALL_STATE(174)] = 4313,
  [SMALL_STATE(175)] = 4330,
  [SMALL_STATE(176)] = 4347,
  [SMALL_STATE(177)] = 4364,
  [SMALL_STATE(178)] = 4381,
  [SMALL_STATE(179)] = 4398,
  [SMALL_STATE(180)] = 4415,
  [SMALL_STATE(181)] = 4432,
  [SMALL_STATE(182)] = 4449,
  [SMALL_STATE(183)] = 4453,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 6, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 6, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 8, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 8, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_declaration, 6, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_declaration, 6, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_statement, 6, .production_id = 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_statement, 6, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_support_declaration, 10, .production_id = 9),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_support_declaration, 10, .production_id = 9),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_definition, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_definition, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 9, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 9, .production_id = 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(65),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(120),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(124),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(125),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(65),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(133),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(115),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(98),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(98),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(96),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(39),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(6),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(65),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(134),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(98),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(98),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 11),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(59),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(105),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 12),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 6, .production_id = 12),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(46),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(104),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2), SHIFT_REPEAT(113),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 9, .production_id = 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdef, 2, .production_id = 6),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 8, .production_id = 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ccode, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 8),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_choice, 6, .production_id = 10),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_descriptor, 4, .production_id = 13),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 2, .production_id = 7),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 4, .production_id = 8),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_name, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_item, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
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
