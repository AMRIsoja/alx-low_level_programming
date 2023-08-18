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

/**
 * mul - Multiplies two integers.
 *
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b);

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void);

/**
 * print_most_numbers - Prints the numbers 0 to 9 (excluding 2 and 4),
 * followed by a new line.
 */
void print_most_numbers(void);

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void);

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n);

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n);

/**
 * print_square - Prints a square using the '#' character.
 * @size: The size of the square.
 */
void print_square(int size);

/**
 * main - Prints numbers from 1 to 100, following Fizz-Buzz rules.
 *
 * Return: Always 0.
 */
int main(void);

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 */
void print_triangle(int size);

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void);

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n);

#endif /* MAIN_H */

