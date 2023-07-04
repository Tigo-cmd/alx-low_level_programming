#include "lists.h"
/**
* add_node - adds a node to the begining of a list
* @head: pointer to first node of the list
* @str: string to be copied into head and printed
*
* Return: address of the new element of NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *r = (list_t *)malloc(sizeof(list_t));

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	if (r == NULL)
	{
		return (NULL);
	}
	r->str = strdup((char *)str);
	if (r->str == NULL)
	{
		free(r);
		return (NULL);
	}
	r->next = *head;
	*head = r;

	return (*head);
}
