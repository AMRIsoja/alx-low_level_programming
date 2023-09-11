#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: The number of elements in the array
 * @size: The size (in bytes) of each element
 *
 * Return: A pointer to the allocated and initialized memory, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for the array */
	ptr = malloc(nmemb * size);

	/* Check for malloc failure */
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	char_ptr = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;
	return (ptr);
}

