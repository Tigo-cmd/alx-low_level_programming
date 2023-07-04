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
	list_t *end;

	if (p == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p->str = strdup((char *)str);
	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}
	p->len = i;
	p->next = NULL;

	if (*head == NULL)
		*head = p;
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = p;
	}
	return (p);
}
