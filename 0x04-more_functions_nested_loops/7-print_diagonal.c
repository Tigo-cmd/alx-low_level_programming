#include "main.h"
/**
* print_diagonal - draws a diagonal line
* @n: first integer
*
* Decsription: function that draws a diagonal line on the terminal.
* Return: Always(0) success
*/
void print_diagonal(int n)
{
	int b = 0, c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (b < n)
		{
			for (c = 0; c < b; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			++b;
		}
	}
}
