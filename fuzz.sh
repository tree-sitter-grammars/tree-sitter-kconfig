#!/usr/bin/env sh

set -eu

ROOT_DIR="fuzzer"

# XXX: ensure shift below is consistent with number of args here
LANG=$1
TIMEOUT=$2
MAX_TOTAL_TIME=$3
CPP=$4

shift 4

# if scanner = scanner.cc then XFLAG = c++ else XFLAG = c
if [ "$CPP" = "cpp" ]; then
	COMPILER="clang++"
	SCANNER="scanner.cc"
	XFLAG="c++"
else
	COMPILER="clang"
	SCANNER="scanner.c"
	XFLAG="c"
fi

export CFLAGS="$(pkg-config --cflags --libs tree-sitter) -O0 -g -w"

JQ_FILTER='.. | if .type? == "STRING" or (.type? == "ALIAS" and .named? == false) then .value else null end'

build_dict() {
	jq "$JQ_FILTER" <src/grammar.json |
		grep -v "\\\\" | grep -v null |
		iconv -c -f UTF-8 -t ASCII//TRANSLIT |
		awk '!/^""$/' >"$ROOT_DIR/dict"
}

build_fuzzer() {
	cat <<END | $COMPILER -fsanitize=fuzzer,address,undefined $CFLAGS -lstdc++ -g -x $XFLAG - src/$SCANNER src/parser.c $@ -o $ROOT_DIR/fuzzer
#include <stdio.h>
#include <stdlib.h>
#include <tree_sitter/api.h>

#ifdef __cplusplus
extern "C"
#endif
TSLanguage *tree_sitter_$LANG();

#ifdef __cplusplus
extern "C"
#endif
int LLVMFuzzerTestOneInput(const uint8_t * data, const size_t len) {
  // Create a parser.
  TSParser *parser = ts_parser_new();

  // Set the parser's language.
  ts_parser_set_language(parser, tree_sitter_$LANG());

  // Build a syntax tree based on source code stored in a string.
  TSTree *tree = ts_parser_parse_string(
    parser,
    NULL,
    (const char *)data,
    len
  );
  // Free all of the heap-allocated memory.
  ts_tree_delete(tree);
  ts_parser_delete(parser);
  return 0;
}
END
}

generate_fuzzer() {
	tree-sitter generate
}

makedirs() {
	mkdir -p "$ROOT_DIR"
	mkdir -p "$ROOT_DIR/out"
}

makedirs
# generate_fuzzer

build_dict
build_fuzzer $@
cd "$ROOT_DIR"
./fuzzer -dict=dict -timeout=$TIMEOUT -max_total_time=$MAX_TOTAL_TIME out/
