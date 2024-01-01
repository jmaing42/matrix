#!/bin/sh

set -e

trap 'rm -f lib/tmp/.tmp.c lib/tmp/.tmp.o lib/tmp/.tmp.json.part' EXIT

echo 'int main(void){}' > lib/tmp/.tmp.c
clang -Wall -Wextra -Werror -std=c11 -pedantic -Ilib/include -c -xc -MJ lib/tmp/.tmp.json.part -o lib/tmp/.tmp.o lib/tmp/.tmp.c
(echo '[' && cat lib/tmp/.tmp.json.part | rev | cut -c 2- | rev && echo ']') > compile_commands.json
