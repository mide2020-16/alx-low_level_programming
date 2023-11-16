#include "main.h"


/**
 * _binary_search - binary search function(recursive)
 * @n: the number to find the squae root of
 * @start: starting point of search range
 * @end: ending point of search range
 * Return: success ALways
 */

int _binary_search(int n, int start, int end)
{

	int mid;

	if (start > end)
	{
		return (-1);

	}

	mid = start + (end - start) / 2;

	if (mid * mid == n)
	{
		return (mid);

	}

	if (mid * mid < n)
	{
		return (_binary_search(n, mid + 1, end));
	}

	return (_binary_search(n, start, mid - 1));
}
/**
 * _sqrt_recursion - Fins=ds the square root of a number.
 *
 * @n: the number.
 *
 * Return: Always Success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);

	}
	if (n == 0 || n == 1)
	{
		return (n);

	}
	return (_binary_search(n, 0, n));


}
