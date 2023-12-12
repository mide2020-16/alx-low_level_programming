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
	listint_t *new_node;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;
	*head = new_node;

	return (new_node);
}
