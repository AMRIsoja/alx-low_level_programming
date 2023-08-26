#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words in a string
 * @str: Pointer to the string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	bool new_word = true;

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			if (new_word)
			{
				if (*ptr >= 'a' && *ptr <= 'z')
					*ptr -= 32;
				new_word = false;
			}
			else if (*ptr >= 'A' && *ptr <= 'Z')
			{
				*ptr += 32;
			}
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
			*ptr == ',' || *ptr == ';' || *ptr == '.' ||
			*ptr == '!' || *ptr == '?' || *ptr == '"' ||
			*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			new_word = true;
		}

		ptr++;
	}

	return (str);
}

