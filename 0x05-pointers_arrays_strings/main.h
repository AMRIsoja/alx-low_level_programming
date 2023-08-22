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

#endif /* MAIN_H */

