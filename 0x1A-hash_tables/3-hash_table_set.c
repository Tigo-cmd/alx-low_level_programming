#include "hash_tables.h"
/**
* hash_table_set - adds element to the hash table
* @set: a non empty string
* @value:  key value pair
*
* Return: Always(0) success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node;

	if (ht == NULL)
	{
		return (NULL);
	}
	if (key == NULL)
	{
		return (NULL);
	}
	i = key_i((unsigned char *)key, ht->size);
	if (ht->array[i] == NULL)
	{
		return (NULL);
	}
	if (strcmp(ht->array[i]->key, key) == 0)
	{
		return (ht->array[i]->value);
	}
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
} 
