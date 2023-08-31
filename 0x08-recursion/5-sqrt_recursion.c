#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 * Return: The natural square root of n,
 * or -1 if it does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Recursive helper function to find the square root
 * @n: The number
 * @guess: The current guess for the square root
 * Return: The natural square root of n,
 * or -1 if it does not have a natural square root
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	if (guess * guess > n)
	{
		return (-1);
	}

	return (find_sqrt(n, guess + 1));
}

