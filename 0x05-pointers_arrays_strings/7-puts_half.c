#include "main.h"
/**
* puts_half - prints half of a string
* @str: pointer to array
*
* Decsription:  function that prints half of a string, followed by a new line.
* Return: Always(0) success
*/
void puts_half(char *str)
{
	int b = 0, mod;

	while (str[b] != '\0')
	{
		b++;
	}
	mod = b % 2;
	if (mod == 0)
	{
		b = b / 2;
		while (str[b] != '\0')
		{
			_putchar(str[b]);
			b++;
		}
	}
	else if (mod != 0)
	{
		b = (b - 1) / 2;
		str++;
		while (str[b] != '\0')
		{
			_putchar(str[b]);
			b++;
		}
	}
	_putchar('\n');
}
