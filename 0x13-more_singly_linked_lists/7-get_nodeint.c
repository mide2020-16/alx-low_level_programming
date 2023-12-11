#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Get node at a particular index strting form 0
 * @head: the current node
 * @index: the indices
 * Return: current node is returned
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (current == NULL)
		return (NULL);

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
