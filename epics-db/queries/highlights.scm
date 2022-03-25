(source_file) @local.scope

(record_type) @type
(string) @string
(string_expansion variable: (identifier) @variable)
(string_expansion [ "${" "$(" "}" ")" ] @punctuation.bracket)
(string_expansion "=" @punctuation.special)

(comment) @comment

"record" @keyword
"field" @keyword
