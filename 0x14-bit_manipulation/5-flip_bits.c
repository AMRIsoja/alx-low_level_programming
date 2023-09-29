#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR the two numbers to find the differences */
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		/* Use bitwise AND with 1 to check the least significant bit */
		count += diff & 1;
		/* Right-shift diff to check the next bit */
		diff >>= 1;
	}

	return (count);
}
