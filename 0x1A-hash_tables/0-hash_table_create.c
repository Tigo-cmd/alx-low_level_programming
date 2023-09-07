#include "hash_tables.h"
/**
* hash_table_create - this creates a hash table
* @size: no of nodes to implement the hash table
*
* Return: pointer tto the new created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *newht = malloc(sizeof(hash_table_t));

	if (newht == NULL)
	{
		return (NULL);
	}

	newht->size = size;
	newht->array = malloc(sizeof(hash_node_t *) * size);
	if (newht->array == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
		newht->array[i] = NULL;

	return (newht);
}
