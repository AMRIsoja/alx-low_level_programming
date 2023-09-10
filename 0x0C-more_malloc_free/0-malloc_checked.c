#include <stdlib.h>
#include "main.h"

/**
 * *mallo_checked : allocate a memory
 *
 * Return : a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

