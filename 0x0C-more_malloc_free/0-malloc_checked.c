#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: number of memory
 * Return: Success
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
