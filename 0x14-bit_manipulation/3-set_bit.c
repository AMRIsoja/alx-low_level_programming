#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the number in which to set the bit
 * @index: The index of the bit to set (0-based)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Return -1 if the index is out of range */
	}

	mask = 1UL << index; /* Create a mask with a 1 at the specified index */
	*n = (*n) | mask; /* Use bitwise OR to set the bit */

	return (1);
}
