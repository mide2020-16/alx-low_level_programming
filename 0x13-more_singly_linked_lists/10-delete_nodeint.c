#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at a prticular index
 * @head: the current node
 * @index: the index to delete
 * Return: 1-for success and 0-for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *current;
	
	i = 0;
	prev = NULL;
	current = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp;

		temp = *head;
		*head = (*head)->next;

		free(temp);
		return (1);
	}

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	prev->next = current->next;

	free(current);
	return (1);
}
