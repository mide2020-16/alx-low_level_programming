#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints values in a node
 * @h: the current node
 * Return: returns node
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		node_count++;
	}
	return (node_count);
	
}
