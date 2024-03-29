#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - eletes the head node of a listint_t linked list
* @head: pointer to head node to be deleted
*
* Return: head node data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	int n;

	if (p == NULL)
		return (0);
	n = p->n;
	*head = (*head)->next;
	free(p);
	return (n);
}
