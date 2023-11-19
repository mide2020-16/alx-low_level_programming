#include "main.h"
#include <math.h>

/**
 * binary_search_recursive - recursive helper function for binary search
 * @n: the number to find the square root of
 * @guess: current guess for the square root
 * @epsilon: the desired level of accuracy
 * Return: the square root of n or -1 if n is negative
 */
double binary_search_recursive(int n, double guess, double epsilon)
{
	if (fabs(guess * guess - n) <= epsilon)
	{
		return (guess);
	}
	else
	{
	return (binary_search_recursive(n, 0.5 * (guess + n / guess), epsilon));
	}
}

/**
 * _sqrt_recursion - Finds the square root of a number.
 * @n: the number.
 * Return: the square root of n or -1 if n is negative
 */
int _sqrt_recursion(int n)
{
	double epsilon = 0.000000000001;

	if (n < 0)
	{
		return (-1);
	}

	return (binary_search_recursive(n, n / 2.0, epsilon));
}
