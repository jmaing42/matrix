all:
.PHONY: all

.PHONY: clean
clean:
	(cd lib && $(MAKE) clean)

.PHONY: init
init: compile_commands.json

clean: clean_compile_commands
.PHONY: clean_compile_commands
clean_compile_commands:
	rm -f compile_commands.json
compile_commands.json:
	sh init.sh

all: lib
.PHONY: lib
lib:
	(cd lib && $(MAKE))
