#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Lists all the elements in the structure
 * @h: the current structure
 * Return: returns number of elements in the structure.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
