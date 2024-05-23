#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * jump_search - LInear search alorithm
 *
 * @array: The given array
 * @size:  Size of the array
 * @value: The value to search for
 *
 * Return: -1 on failure and index on success
*/
int jump_search(int *array, size_t size, int value)
{
	unsigned int jump_size, p1, p2;

	if (array == NULL || size == 0)
		return (-1);

	jump_size = sqrt(size);
	p1 = 0;
	p2 = jump_size;

	while (p1 < size && array[p1] < value)
	{
		printf("Value checked array[%u] = [%d]\n", p1, array[p1]);

		if (p2 >= size || array[p2] >= value)
			break;

		p1 = p2;
		p2 = p2 + jump_size;
	}

	printf("Value found between indexes [%u] and [%u]\n", p1, p2);

	while (p1 < size && array[p1] <= value)
	{
		printf("Value checked array[%u] = [%d]\n", p1, array[p1]);

		if (array[p1] == value)
			return p1;

		p1++;
	}

	return (-1);
}
