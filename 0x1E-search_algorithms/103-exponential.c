#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 *
 * @array: The given array
 * @low: The starting index
 * @high: The ending index
 * @value: The value to search for
 *
 * Return: -1 on failure and index on success
 */
int binary_search2(int *array, size_t low, size_t high, int value)
{
    size_t mid, j;

    if (array == NULL || low > high)
        return (-1);

    while (low <= high)
    {
        printf("Searching in array: ");
        for (j = low; j <= high; j++)
        {
            printf("%d", array[j]);
            if (j < high)
                printf(", ");
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

/**
 * exponential_search - Exponential search algorithm
 *
 * @array: The given array
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: -1 on failure and index on success
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t i = 1, high, low;

    if (array == NULL || size == 0)
        return (-1);

    if (array[0] == value)
        return 0;

    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%u] = [%d]\n", i, array[i]);
        i *= 2;
    }

    low = i / 2;
    high = (i < size) ? i : size - 1;

    printf("Value found between indexes [%u] and [%u]\n", low, high);

    return binary_search2(array, low, high, value);
}
