#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a node to the begining of the lists
 * @head: the leading lists
 * @n: number
 * Return: the address of the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	free(new_node);
	return (new_node);
}
