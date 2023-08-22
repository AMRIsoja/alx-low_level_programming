#include "main.h"
#include <limits.h> // Include the <limits.h> header for INT_MAX and INT_MIN

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1; // Default positive sign
    int result = 0;

    // Skip leading whitespace
    while (*s == ' ')
        s++;

    // Check for sign
    if (*s == '-' || *s == '+')
    {
        if (*s == '-')
            sign = -1;
        s++;
    }

    // Convert digits to integer
    while (*s >= '0' && *s <= '9')
    {
        // Check for overflow
        if (result > (INT_MAX - (*s - '0')) / 10)
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

