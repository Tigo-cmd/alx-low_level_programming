#include "lists.h"
/**
* listint_len - returns the element in a linked listint_t list
* @h: struct with int members to be printed
*
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
