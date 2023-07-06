#include "lists.h"
/**
* sum_listint - function that returns the sum of
* all the data (n) of a listint_t linked list.
* @head: address of the fisrt node data
*
* Return: sum of all the data (n) of a listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
