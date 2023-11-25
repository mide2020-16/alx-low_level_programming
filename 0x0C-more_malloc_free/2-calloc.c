#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - memory allocation for arrays
 * @nmemb: member of the array
 * @size: size of bytes
 * Return: Success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;
	int total_size;
	total_size = nmemb * size
	if (nmemb == 0 || size == 0)
		return (NULL);
	
	mem = malloc(total_size);
	
	if (mem == NULL)
		return (NULL);
	memset(mem, 0, total_size);
	
	return (mem);
}
