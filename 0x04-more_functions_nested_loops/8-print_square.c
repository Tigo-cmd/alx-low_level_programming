#include "main.h"
/**
* print_square - prints a square
* @size: first param
*
* Decsription:  function that prints a square, followed by a new line.
* Return: Always(0) success
*/
void print_square(int size)
{
	int a, b;

	a = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (a < size)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
			a++;
		}
	}
}
