#include "hash_tables.h"

/**
 * hash_table_create - Creates a new table to store data
 * @size: the size of the table
 * Return: the table once created
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/* Allocate memory for the hash_table */
	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return NULL;

	hash_table->size = size;

	/* Allocate memory for the array of hash hash_table nodes */
	hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return NULL;
	}

	/* Initialize each array element to NULL */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return hash_table;
}
