#include "list.h"
/**
* print_list - prints all element of a list
* @h: list to be printed
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	list_t *begin = h;
	size_t i = 0;

	while (begin != NULL)
	{
		if (begin->str == NULL)
		{
			begin->str = "(nil)";
			begin->len = 0;
		}
		printf("[%d] %s\n", begin->len, begin->str);
		beg = beg->next;
		i++;
	}
	return (i);
}
