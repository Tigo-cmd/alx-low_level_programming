#include "hash_tables.h"
/**
* hash_table_get - function that retrieves a value associated with a key.
* @key: the key you are looking for
* @ht: the hash table you want to look into
* Return: Always(0) success
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	new_node = ht->array[index];
	while (new_node && strcmp(new_node->key, key) != 0)
	{
		new_node = new_node->next;
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	return (new_node->value);
}
