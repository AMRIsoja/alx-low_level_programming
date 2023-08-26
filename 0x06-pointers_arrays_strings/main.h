#ifndef MAIN_H
#define MAIN_H

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - Copies a string, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to copy from src
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n);

#endif /* MAIN_H */

