#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count = 0;

	x = n ^ m;

	while (x > 0)
	{
		if ((x & 1) == 1)
			count++;
		x >>= 1;
	}

	return (count);
}
