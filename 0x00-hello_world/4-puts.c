#!/bin/bash
echo '#include <stdio.h>' > 4-puts.c && echo 'int main(void) { puts("\"Programming is like building a multilingual puzzle"); return 0; }' >> 4-puts.c && gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
