#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function serves as the entry point for the program. It prints
 * the name of the source file from which it was compiled
 * to the standard output
 * followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	printf("%s\n", __FILE__);/* Print the name of the source file */
	return (0);
}

