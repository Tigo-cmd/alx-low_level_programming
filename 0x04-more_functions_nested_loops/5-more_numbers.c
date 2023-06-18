#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Decsription: function that prints 10 times the numbers,
* from 0 to 14, followed by a new line.
* Return: nothing
*/
void more_numbers(void)
{
	int c, d;

	d = 0;
	while (d < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('1');
			_putchar(c % 10 + '0');
		}
		d++;
	}
	_putchar('\n');
}
