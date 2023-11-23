#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initialze it with a specified chaacter
 * @size: the size of the memory
 * @c: specific character
 * Return: Success Always
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	
	return (array);
}
