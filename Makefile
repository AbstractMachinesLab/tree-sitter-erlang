TREE_SITTER=tree-sitter

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

.PHONY: publish
publish: all wasm
	cp ./tree-sitter-erlang.wasm ./docs

