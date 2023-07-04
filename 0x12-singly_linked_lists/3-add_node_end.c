#include "lists.h"
/**
* add_node_end - inserts a node at the end of a list
* @head: pointer to the first node
* @str: string to be copied
*
* Return: address of the element or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;

	list_t *p = (list_t *)malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p->str = strdup((char *)str);
	p->next = NULL;

	list_t *end;

	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		new = *head;
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = p;
	}
	return (p);
}
