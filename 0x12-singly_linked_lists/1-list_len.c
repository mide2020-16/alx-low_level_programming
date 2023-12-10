#include "lists.h"
#include <stdio.h>

/**
 * list_len - Number of nodes present
 * @h: current node
 * Return: REturns number of node
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}