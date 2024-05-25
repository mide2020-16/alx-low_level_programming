#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * interpolation_search - LInear search alorithm
 *
 * @array: The given array
 * @size:  Size of the array
 * @value: The value to search for
 *
 * Return: -1 on failure and index on success
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low;

	if (array == NULL || size == 0)
		return (-1);

	high = size - 1;
	low = 0;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%u] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
