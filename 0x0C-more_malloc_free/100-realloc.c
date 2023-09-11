#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the previously allocated memory block
 * @old_size: The old size of the memory block
 * @new_size: The new size of the memory block
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/* Handle the case of ptr being NULL like malloc */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Handle the case of new_size being zero like free */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate memory for the new size */
	new_ptr = malloc(new_size);

	/* Check for malloc failure */
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the contents from the old pointer to the new pointer */
	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	/* Free the old pointer */
	free(ptr);
	return (new_ptr);
}

