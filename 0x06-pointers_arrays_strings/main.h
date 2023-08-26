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

#endif /* MAIN_H */

