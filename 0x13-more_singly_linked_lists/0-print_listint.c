#include "lists.h"
/**
* print_listint - prints all element of a listint_t
* @h: pointer to structure (inherited)
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
