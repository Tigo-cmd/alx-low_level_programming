#include "main.h"
/**
* print_line - draws a straight line
* @n: first parameter
*
* Decsription: function that draws a straight line in the terminal.
* Return: Always(0) success
*/
void print_line(int n)
{
	int b;

	if (b == 0)
		_putchar('\n');
	else if (b < 0)
		_putchar('\n');
	else if (b > 0)
	{
		for (b = 0; b <= n; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
