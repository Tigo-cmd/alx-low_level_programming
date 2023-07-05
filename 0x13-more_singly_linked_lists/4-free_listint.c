#include "lists.h"
/**
* free_listint - frees a listint_t list
* @head: pointer to first list to be freed
* Return: Always(0) success
*/
void free_listint(listint_t *head)
{
	listint_t *p  = head;
	listint_t *new;

	while (p != NULL)
	{
		new = p->next;
		free(p);
		p = new;
	}
}
