#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;

    putchar('0' + last_digit);

    return last_digit;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);
    putchar('0' + r);
    putchar('\n');

    r = print_last_digit(0);
    putchar('0' + r);
    putchar('\n');

    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');

    return (0);
}
