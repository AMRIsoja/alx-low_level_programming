#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 * otherwise, returns a pointer to the newly allocated duplicate string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

