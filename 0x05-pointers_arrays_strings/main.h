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

/**
 * _puts - Prints a string followed by a new line.
 *
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str);

/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s);

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s);

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The input string.
 */
void puts2(char *str);


/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str);

/**
 * print_array - Prints n elements of an array of integers, 
 followed by a new line.
 * @a: The input array.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n);

/**
 * _strcpy - Copies the string pointed to by src 
 * to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src);

#endif /* MAIN_H */

