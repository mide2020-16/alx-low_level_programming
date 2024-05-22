#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - LInear search alorithm
 *
 * @array: The given array
 * @size:  Size of the array
 * @value: The value to search for
 *
 * Return: -1 on failure and index on success
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return (-1);
}
