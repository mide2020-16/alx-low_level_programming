#include "main.h"

/**
 * _pow_recursion - Raised to the power of.
 *
 * @x: the base
 * @y: the exponent
 *
 * Return: Always Success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);

	}
	if (y == 0)
	{
		return (1);

	}

	return (x * _pow_recursion(x, y - 1));
}
