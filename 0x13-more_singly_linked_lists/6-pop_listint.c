#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the current node
 * @head: current node
 * Return: data
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (data);
}
