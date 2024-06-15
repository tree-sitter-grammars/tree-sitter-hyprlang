package tree_sitter_hyprlang_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-hyprlang"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hyprlang.Language())
	if language == nil {
		t.Errorf("Error loading Hyprlang grammar")
	}
}
