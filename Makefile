TREE_SITTER=./node_modules/.bin/tree-sitter

.PHONY: test
test: gen
	$(TREE_SITTER) test


.PHONY: gen
gen:
	$(TREE_SITTER) generate

.PHONY: deps
deps:
	yarn
