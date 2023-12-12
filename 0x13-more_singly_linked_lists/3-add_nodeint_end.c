#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node to the end of the lists
 * @head: the current structure
 * @n: number
 * Return: the adress of the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	current = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return (new_node);
}
