package tree_sitter_hyprlang_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hyprlang "github.com/tree-sitter-grammars/tree-sitter-hyprlang/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hyprlang.Language())
	if language == nil {
		t.Errorf("Error loading Hyprlang grammar")
	}
}
