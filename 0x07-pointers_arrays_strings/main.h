#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/** Function prototype for _putchar 
 *
 *
 */
int _putchar(char c);

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill with
 * @n: Number of bytes to fill
 * Return: Pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n);

#endif /* MAIN_H */

