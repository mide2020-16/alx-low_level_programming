#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Lists all the elements in the structure
 * @h: the current structure
 * Return: returns number of elements in the structure.
 *
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
