#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * advanced_binary_recursion - LInear search alorithm
 *
 * @array: The given array
 * @size:  Size of the array
 * @value: The value to search for
 *
 * Return: -1 on failure and index on success
*/
int advanced_binary_recursion(int *array, size_t low, size_t high, int value)
{
	size_t mid, j;

	if (high >= low)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j < high)
				printf(", ");
		}
	}
	printf("\n");

	if (array[mid] == value && (mid == low || array[mid - 1] < value))
		return mid;

	if (array[mid] >= value)
		return (advanced_binary_recursion(array, low, mid, value));

	return (advanced_binary_recursion(array, mid + 1, high, value));

	return (-1);
}


/**
 * advanced_binary - LInear search alorithm
 *
 * @array: The given array
 * @size:  Size of the array
 * @value: The value to search for
 *
 * Return: -1 on failure and index on success
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursion(array, 0, size - 1, value));
}
