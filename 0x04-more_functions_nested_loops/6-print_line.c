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

	for (b = 0; b <= n; b++)
	{
		if (n == 0 && n < 0)
			_putchar('\n');
		else
			_putchar('_');
	}
}
