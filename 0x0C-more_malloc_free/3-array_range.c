#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array of integers from min to max
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
    int *arr;
    int i;
    int total_size;

    // Check if min is greater than max
    if (min > max)
        return NULL;

    total_size = (max - min) + 1;

    arr = malloc(total_size * sizeof(int));

    // Check if malloc failed
    if (arr == NULL)
        return NULL;

    arr[0] = min;
    for (i = 1; i < total_size; ++i)
    {
        arr[i] = arr[i - 1] + 1;
    }

    return arr;
}
