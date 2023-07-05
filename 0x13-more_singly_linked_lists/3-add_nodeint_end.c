#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of the listint_t list
* @head: pointer to first node
* @n: integer to be copied
*
* Return: Address of new element or null if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = (listint_t *)malloc(sizeof(listint_t));
	listint_t *q;

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->n = n;
	p->next = NULL;

	if (*head == NULL)
		*head = p;
	else
	{
		q = *head;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = p;
	}
	return (p);
}
