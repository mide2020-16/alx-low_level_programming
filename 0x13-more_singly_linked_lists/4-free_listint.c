#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees the structure
 * @head: the present structure
 *
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
