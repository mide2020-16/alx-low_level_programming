#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees the structure
 * @head: the present structure
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		next = current;
	}

	*head = NULL;
}
