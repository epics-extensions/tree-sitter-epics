(source_file) @local.scope

(record_type) @type
(field_type) @type
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
