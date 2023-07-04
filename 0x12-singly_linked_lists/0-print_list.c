#include "lists.h"
/**
* print_list - prints all element of a list
* @h: list to be printed
*
* Description: function that prints all element of a list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	list_t *begin = (list_t *)h;
	size_t i = 0;
	int b = 0;

	while (begin != NULL)
	{
		if (begin->str == NULL)
		{
			begin->str = "(nil)";
			begin->len = 0;
		}
		else if (begin->str != NULL)
		{
			while (begin->str[b] != '\0')
			{
				b++;
			}
		}
		begin->len = b;
		printf("[%d] %s\n", begin->len, begin->str);
		begin = begin->next;
		i++;
	}
	return (i);
}
