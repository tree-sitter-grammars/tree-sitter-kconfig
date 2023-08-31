"source" @include

[
  "mainmenu"
  "config"
  "menuconfig"
  "choice"
  "endchoice"
  "comment"
  "menu"
  "endmenu"
  "prompt"
  "default"
  "range"
  "help"
  (optional)
  (modules)
] @keyword

[
  "if"
  "endif"
  "depends on"
  "select"
  "imply"
  "visible if"
] @conditional

[
  "def_bool"
  "def_tristate"
] @keyword.function

[
  "||"
  "&&"
  "="
  "!="
  "<"
  ">"
  "<="
  ">="
  "!"
] @operator

[
  "bool"
  "tristate"
  "int"
  "hex"
  "string"
] @type.builtin

[ "(" ")" ] @punctuation.bracket

(macro_variable ["$(" ")"] @punctuation.special)

(symbol) @variable

[
  (prompt)
  (macro_content)
  (text)
] @string

(mainmenu name: (prompt) @tag)

(config name: (symbol) @type)
(menuconfig name: (symbol) @type)
(choice name: (symbol) @type)

(comment_entry name: (prompt) @type)
(menu name: (prompt) @type)

(source (prompt) @text.uri @string.special)

(comment) @comment

(ERROR) @error
