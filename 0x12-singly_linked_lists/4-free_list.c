#include "lists.h"
/**
* free_list - function tha frees a list_t list
* @head: first node of the list
*
* Return: nothing
*/
void free_list(list_t *head)
{
	if (head != NULL && head->str != NULL)
	{
		free(head->str);
		free(head);
	}
}
