#include "main.h"

/**
 * _prime_checker - checks for a prime number
 * @n: the number
 * @div: the divisor
 * Return: n Always
 */

int _prime_checker(int n, int div)
{
	if (n <= 1 || n % div == 0)
	{
		return (0);
	}

	if (div * div > n)
	{
		return (1);
	}

	return (_prime_checker(n, div + 1));
}

/**
 * is_prime_number - To know if a number is a prime numer
 * @n: The number to check
 * Return: returns 0 for failure and 1 for success
 */

int is_prime_number(int n)
{
	return (_prime_checker(n, 2));
}
