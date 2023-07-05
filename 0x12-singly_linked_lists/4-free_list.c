#include "lists.h"
/**
* free_list - function tha frees a list_t list
* @head: first node of the list
*
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *p;
	list_t *init = head;

	while (init != NULL)
	{
		p = init->next;
		free(init->str);
		free(init);
		init = p;
	}
}
