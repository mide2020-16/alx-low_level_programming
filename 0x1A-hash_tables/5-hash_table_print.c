#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints the keys and values
 * @ht: the table instance
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node->next != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
