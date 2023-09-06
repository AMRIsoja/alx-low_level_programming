#include <stdlib.h>
#include "main.h"

/**
 * create_array Creates an array of characters
 * and initializes it with a char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 * Return: If memory allocation fails or if size is 0, returns NULL.
 *         Otherwise, returns a pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr; /* a pointer array */
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

