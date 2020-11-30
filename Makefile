TREE_SITTER=./node_modules/.bin/tree-sitter

all: fmt gen test

fmt:
	./node_modules/.bin/prettier --write grammar.js

.PHONY: test
test: gen
	$(TREE_SITTER) test


.PHONY: gen
gen:
	$(TREE_SITTER) generate

.PHONY: deps
deps:
	yarn

.PHONY: web
web: wasm
	$(TREE_SITTER) web-ui

.PHONY: wasm
wasm:
	$(TREE_SITTER) build-wasm
