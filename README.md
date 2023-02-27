# tree-sitter-epics

This repository contains parsers for various EPICS-related domain-specific
languages.

Currently, it contains parsers for:

- EPICS' [database] (`.db` and `.dbd`) files
- EPICS' `.cmd` files
- EPICS' `.sub` files
- EPICS' [macro substitution] syntax
- StreamDevice's [protocol files]
- Seq's [SNL] files

[database]: <https://docs.epics-controls.org/en/latest/appdevguide/databaseDefinition.html>
[macro substitution]: <https://docs.epics-controls.org/en/latest/appdevguide/databaseDefinition.html#macro-substitution>
[protocol files]: <https://paulscherrerinstitute.github.io/StreamDevice/protocol.html>
[SNL]: <https://www-csr.bessy.de/control/SoftDist/sequencer/Reference.html>

## Using these parsers for syntax validation

You can use these parsers to validate the syntax of your files. This may be
useful for example to validate `.db` files during the compilation of an IOC.

The quickest way to do this is by [installing the `tree-sitter` command-line
tool][cli-install].

[cli-install]: <https://tree-sitter.github.io/tree-sitter/creating-parsers#installation>

Then, clone this repository somewhere, and add it to the global `tree-sitter`
config by running `tree-sitter init-config` and adding the path under
`"parser-directories"` in `~/.config/tree-sitter/config.json`. ([Source])

[Source]: <https://tree-sitter.github.io/tree-sitter/syntax-highlighting#per-user-configuration>

You can now use `tree-sitter parse /path/to/file.db` to validate an EPICS
database file.

## Using these parsers for more complex tools

Each of these parsers comes with bindings in various languages. Here are the
links to the documentation of tree-sitter for those various languages:

- [C](https://tree-sitter.github.io/tree-sitter/using-parsers)
- [Rust](https://github.com/tree-sitter/tree-sitter/tree/master/lib/binding_rust)
- [Node.js](https://github.com/tree-sitter/node-tree-sitter)
- [WebAssembly](https://github.com/tree-sitter/tree-sitter/tree/master/lib/binding_web)
