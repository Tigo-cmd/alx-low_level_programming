#include "lists.h"
/**
* insert_nodeint_at_index -  function that inserts a new node
*				at a given position.
*
* @head: pointer to the first node of the lists
* @idx: index of the list where the new node should be added
* @n: data to be added at the given position
*
* Return: Always(0) success
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *b = (listint_t *)malloc(sizeof(listint_t));
	int current = 0;


	if (b == NULL)
		return (NULL);
	while (current < (int)idx - 1)
	{
		p = p->next;
		current++;
	}
	b->n = n;
	b->next = p->next;
	p->next = b;
	return (b);
}
