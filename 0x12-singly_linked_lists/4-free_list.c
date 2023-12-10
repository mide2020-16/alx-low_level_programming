#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees struct after useage
 * @head: the present list
 *
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}