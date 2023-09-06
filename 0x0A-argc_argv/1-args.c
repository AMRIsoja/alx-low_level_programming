#include <stdio.h>
#include "main.h"

/**
 * print number of arguments pass
 * return 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

