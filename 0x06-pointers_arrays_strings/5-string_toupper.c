#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase in a string
 * @str: Pointer to the string
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
