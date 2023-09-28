#include <stdio.h>
#include "main.h"

/**
 * Converts a binary string to an unsigned int.
 *
 * This function takes a binary string consisting of '0' and '1' characters
 * and converts it to an equivalent unsigned integer.
 *
 * @param b A pointer to the binary string to be converted.
 *
 * @return The converted unsigned integer. If the input string is NULL or
 * contains non-binary characters, it returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result <<= 1;
		result += (*b - '0');
		b++;
	}
	return (result);
}
