#include "lists.h"
/**
* add_nodeint - adds a node at the begining of a listint_t list
* @head: pointer to first node
* @n: int to be copied
*
* Return: address of the new element or Null if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = (listint_t *)malloc(sizeof(listint_t));

	if (p == NULL)
		return (NULL);
	p->n = n;
	if (!p->n)
	{
		free(p);
		return (NULL);
	}
	p->next = *head;
	*head = p;
	return (p);
}
