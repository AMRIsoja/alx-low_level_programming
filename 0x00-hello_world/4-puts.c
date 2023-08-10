#!/bin/bash
#!/bin/bash
echo '#include <stdio.h>' > temp.c && echo 'int main(void) { printf("Programming is like building a multilingual puzzle\\n"); return 0; }' >> temp.c && gcc -Wall -Werror -Wextra -pedantic -std=gnu89 temp.c -o cisfun && ./cisfun
