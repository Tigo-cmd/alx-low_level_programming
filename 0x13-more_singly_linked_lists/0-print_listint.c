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

	const listint_t *p = h;

	if (p == NULL)
		return (NULL);

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
