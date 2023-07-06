#include "lists.h"
/**
* pop_listint - eletes the head node of a listint_t linked list
* @head: pointer to head node to be deleted
*
* Return: head node data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	if (p == NULL)
		return (0);
	*head = (*head)->next;
	return (p->n);
}
