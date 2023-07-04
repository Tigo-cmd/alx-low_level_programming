#include "lists.h"
/**
* list_len - returns nummber of element in a linked list
* @h: list to be counted
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	list_t *begin = (list_t *)h;
	size_t i = 0;

	while (begin != NULL)
	{
		begin = begin->next;
		i++;
	}
	return (i);
}
