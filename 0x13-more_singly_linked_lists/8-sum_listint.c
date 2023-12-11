#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums the data(n) int he list
 * @head: current node
 * Return: sum of value
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
