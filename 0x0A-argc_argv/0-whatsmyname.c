#include <stdio.h>
#include "main.h"

/**
 * this function
 * print it's name
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
		printf("%s\n", argv[0]);
	return (0);
}

