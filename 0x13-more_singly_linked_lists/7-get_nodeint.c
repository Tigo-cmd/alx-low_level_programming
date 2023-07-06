#include "lists.h"
/**
* get_nodeint_at_index - searches for a given node position
* and returns the data of the node
* @head: pointer the first node data
* @index: position is the node in the list
*
* Return: nth/data node of the list listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	int no = 0;

	while (n < (int)index)
	{
		if (!p)
			return (NULL);
		p = p->next;
		no++;
	}
	if (p == NULL)
		return (NULL);
	return (p);
}
