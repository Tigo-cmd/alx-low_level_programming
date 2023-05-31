#include "main.h"
/**
* print_square - prints a square
* @size: first param
*
* Decsription:  function that prints a square, followed by a new line.
* Return: Always(0) success
*/
void print_square(int size);
{
	int i, j;

	j = 0;
	if (size == 0)
		__putchar('\n');
	else if (size > 0)
	{
		while (j < size)
		{
			for (i = 0; i > size; i++)
			{
				_putchar('#');
			}
			j++;
		}
	}
}
