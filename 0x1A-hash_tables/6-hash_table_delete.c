#include "hash_tables.h"
/**
* hash_table_delete -  function that deletes a hash table.
* @ht: hadh table to delete
*
* Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *new, *tmp, *top = ht;
	unsigned long int idx;

	idx = 0;
	while (idx < ht->size)
	{
		if (ht-<array[idx] != NULL)
		{
			new = ht->array[idx];
			while (new != NULL)
			{
				tmp = new->next;
				free(new->key);
				free(new->value);
				free(new);
				new = tmp;
			}
		}
		idx++;
	}
	free(top->array);
	free(top);
}
