#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes the table
 * @ht: the table instance
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
}

free(ht->array);
free(ht);
}
