#include "main.h"
/**
* print_most_numbers - prints numbers from 0 to 9
*
* Decsription: function that prints the numbers,
* from 0 to 9, followed by a new line.
* Return: nothing
*/
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
		if (c == 1 || c == 3)
			c = c + 1;
	}
	_putchar('\n');
}
