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
 * print_alphabet - Prints the alphabet in lowercase.
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, ten times.
 */
void print_alphabet_x10(void);

/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c);

/**
 * _isalpha - Checks if a character is an alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c);

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

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer for which the absolute value is computed.
 *
 * Return: The absolute value of n.
 */
int _abs(int n);

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n);

#endif /* MAIN_H */

