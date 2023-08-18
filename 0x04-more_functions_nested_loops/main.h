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
 * Description: is to check is upper or not
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c);

/**
 * Description: this is a function to check if a cracter is a digit
 * 
 * @c: the carackter to be checked
 *
 * return 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

#endif /* MAIN_H */

