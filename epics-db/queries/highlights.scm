(source_file) @local.scope

(record_type) @type
(builtin_record_type) @type.builtin
(field_type) @type
(builtin_field_type) @type.builtin
(string) @string
(string_expansion variable: (identifier) @constant)
(string_expansion [ "${" "$(" "}" ")" ] @punctuation.bracket)
(string_expansion "=" @punctuation.special)

(comment) @comment

"record" @keyword
"field" @keyword
