#include "hash_tables.h"
/**
* hash_table_print -  function that prints a hash table.
* @ht: the hash table
* Return: Always(0) success
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned char c = 0;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i > ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (c == 1)
				printf(", ");
			new = ht->array[i];
			while (new != NULL)
			{
				printf("'%s': '%s'", new->key, new->value);
				new = new->next;
				if (new != NULL)
					printf(", ");
			}
			c = 1;
		}
		i++;
	}
	printf("}\n");
}
