#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary string to an unsigned integer.
 *
 * @b: the binary string to convert
 *
 * Return: the converted decimal if the input is valid binary string 0 else
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int binary_length = strlen(b);
	int i;

	for (i = 0; i < binary_length; i++)
	{
		if (b[i] == '1')
		{
			decimal = (decimal << 1) | 1;
		}
		else if (b[i] == '0')
		{
			decimal = decimal << 1;
		}
		else
			return (0);
	}
	return (decimal);
}
