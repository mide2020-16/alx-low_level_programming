#include "main.h"

/**
 * factorial - Factorial of a number
 *
 * @n: number
 *
 * Return: 0 Success
 */

int factorial(int n)
{
	int answer = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	answer = n * factorial(n - 1);

	return (answer);
}
