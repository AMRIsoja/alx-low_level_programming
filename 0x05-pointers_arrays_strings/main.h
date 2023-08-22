#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Writes a character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, returns the number of characters written.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c);

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 *
 * @n: Pointer to the integer whose value needs to be updated.
 */
void reset_to_98(int *n);

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b);

/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s);

#endif /* MAIN_H */

