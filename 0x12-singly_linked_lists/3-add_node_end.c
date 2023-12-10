#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node
 * @head: the head node
 * @str: string int a node
 * Return: Reuturns new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}
	return (new_node);
}
