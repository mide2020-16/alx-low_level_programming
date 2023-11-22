#include <stdlib.h>

/**
 * create_array - creates an array and initialze it with a specified chaacter
 * @size: the size of the memory
 * @c: specific character
 * Return: Success Always
 */

int *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	unsigned int i;
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	free(array);
	return (0);
}
