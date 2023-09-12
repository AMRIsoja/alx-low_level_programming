#ifndef FUNCTION_MACROS_H
#define FUNCTION_MACROS_H

/*
 * ABS(x) - Computes the absolute value of x.
 *
 * This macro returns the absolute value of the given number x.
 * If x is negative, it negates it to make it positive.
 *
 * Parameters:
 * x: The number for which the absolute value is calculated.
 */
#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif

