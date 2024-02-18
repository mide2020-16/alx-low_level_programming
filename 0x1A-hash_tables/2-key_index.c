#include "hash_tables.h"

/**
 * key_index - Generates an index for every entry
 * @key: the key
 * @size: the size of the table
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key);

	return (hash_index % size);
}
