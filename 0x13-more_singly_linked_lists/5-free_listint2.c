#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees the structure
 * @head: the present structure
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	free(*head);
	*head = NULL;
}
