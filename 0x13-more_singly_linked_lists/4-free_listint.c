#include "lists.h"
#include <stdlib.h>

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		next = current;
	}
}