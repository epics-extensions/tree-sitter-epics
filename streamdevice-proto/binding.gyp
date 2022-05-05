{
  "targets": [
    {
      "target_name": "tree_sitter_streamdevice_proto_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
        # If your language uses an external scanner, add it here.
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
