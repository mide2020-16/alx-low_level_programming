#include "hash_tables.h"

/**
 * create_node - Creates a new node
 * @key: the key
 * @value: the value to store
 * Return: the new node
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table)_set - This sets the node in the table
 * @ht: the table instance
 * @key: the key
 * @value: the value
 * Return: 1 on Success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	new_node = create_node(key, value);

	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}
