#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int is_number = 0; /* Flag to indicate */
		/* if at least one digit is found */

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			is_number = 1;
			if (result > (INT_MAX - (*s - '0')) / 10)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (*s - '0');
		}
		else if (is_number) /* Stop parsing if not a digit */
			/* and at least one digit is found */
			break;
		s++;
	}

	return (result * sign);
}

