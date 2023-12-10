#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node
 * @head: the head node
 * @str: string int a node
 * Return: Reuturns new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int size;
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	size = sizeof(list_t);
	new_node = malloc(size);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
