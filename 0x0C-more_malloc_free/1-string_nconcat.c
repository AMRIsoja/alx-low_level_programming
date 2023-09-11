#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes of the second string
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;
	char *concatenated;

	/* Calculate the lengths of both input strings */
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	/* Determine the actual number of bytes to concatenate */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string (+1 for the null terminator) */
	concatenated = malloc(len1 + n + 1);
	if (concatenated == NULL)
		return (NULL);

	/* Copy characters from the first string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy characters from the second string (up to the first n bytes) */
	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];
	/* Add the null terminator */
	concatenated[i + j] = '\0';
	return (concatenated);
}

