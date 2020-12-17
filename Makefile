SHELL:=/bin/bash

TREE_SITTER=tree-sitter

all: binp depsp fmt gen test

fmt:
	./node_modules/.bin/prettier --write grammar.js

.PHONY: test
test: gen
	$(TREE_SITTER) test

.PHONY: debug
debug: gen
	$(TREE_SITTER) test -d

.PHONY: gen
gen:
	$(TREE_SITTER) generate

.PHONY: depsp
depsp:
	@if [ ! -d "node_modules" ]; then $(MAKE) deps; fi

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

.PHONY: binp
binp:
	@if [ ! -x "`command -v $(TREE_SITTER)`" ]; then echo 'Error: tree-sitter cannot be found on your path.' >&2; exit 1; fi
