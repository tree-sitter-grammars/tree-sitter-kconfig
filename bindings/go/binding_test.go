package tree_sitter_kconfig_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_kconfig "github.com/tree-sitter-grammars/tree-sitter-kconfig/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kconfig.Language())
	if language == nil {
		t.Errorf("Error loading Kconfig grammar")
	}
}
