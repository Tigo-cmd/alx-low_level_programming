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
	unsigned long int i, x;
	hash_node_t *new_node;
	char *dup_value

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL)
	{
		return (0);
	}
	if (value == NULL)
	{
		return (0);
	}
	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	x = key_index((const unsigned char *)key, ht->size);
	for (i = x; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = dup_value;
	new_node->next = ht->array[x];
	ht->array[x] = new_node;
	
	return (1);
} 
