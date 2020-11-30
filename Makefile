TREE_SITTER=./node_modules/.bin/tree-sitter

.PHONY: deps
deps:
	yarn

.PHONY: test
test:
	$(TREE_SITTER) test

.PHONY: gen
gen:
	$(TREE_SITTER) generate
