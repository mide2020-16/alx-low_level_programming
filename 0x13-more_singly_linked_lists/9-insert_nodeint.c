#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given node list
 * @head: the current structure
 * @idx: the index
 * @n: the value
 * Return: new node data
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current;
	
	i = 0;
	new_node = malloc(sizeof(listint_t));
	current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
