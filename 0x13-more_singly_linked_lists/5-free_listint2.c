#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head : pointer fo first node to be frred
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *p = head;
	listint_t *new;

	while (p != NULL)
	{
		new = p->next;
		free(p);
		p = new;
	}
	head = NULL;
}
