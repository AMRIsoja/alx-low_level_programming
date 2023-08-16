#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Writes a character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, returns the number of characters written.
 *         On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c);

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number to be checked.
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *        -1 and prints - if n is less than zero.
 */
int print_sign(int n);

#endif /* MAIN_H */
