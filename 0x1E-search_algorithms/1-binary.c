#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - LInear search alorithm
 *
 * @array: The given array
 * @size:  Size of the array
 * @value: The value to search for
 *
 * Return: -1 on failure and index on success
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int high, low, mid, j;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	high = size - 1;
	low = 0;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}