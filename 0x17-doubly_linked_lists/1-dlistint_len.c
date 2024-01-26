#include "lists.h"

/**
 * dlistint_len - a Function that ...
 * @h: Description of h.
 * Return: Description of the return value.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}

