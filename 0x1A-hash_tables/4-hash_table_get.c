#include "hash_tables.h"

/**
 * hash_table_get - This gets the value of a particular key
 * @ht: the table instance
 * @key: the key
 * Return: the value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;

		node = node->next;
	}
	return (NULL);
}
