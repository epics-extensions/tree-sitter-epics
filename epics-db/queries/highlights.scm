(source_file) @local.scope

(record_type) @type
(builtin_record_type) @type.builtin
(field_type) @type
(builtin_field_type) @type.builtin
(string) @string
(escape_sequence) @string.special
(macro_expansion) @string.special

(comment) @comment

[ "${" "{" "}" "$(" "(" ")" ] @punctuation.bracket
[ "," ] @punctuation.delimiter

[
 "record"
 "field"
] @keyword
