#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a range of array
 * @min: minimum number
 * @max: maximum number
 * Return: Success
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int total_size;

	if (min > max)
		return (NULL);
	
	total_size = (max - min) + 1;
	
	arr = malloc(total_size * sizeof(int));

	if (arr == NULL)
		return (NULL);
	
	arr[0] = min;
	for (i = 1; i < total_size; ++i)
		{
			arr[i] = arr[i - 1] + 1;
		}
	return (arr);
}
