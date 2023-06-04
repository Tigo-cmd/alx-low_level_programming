#include "main.h"
/**
* puts2 - function that prints every other character of a string
* @str: pointer to array
*
* Decsription:  function that prints every other
* character of a string, starting with the first character,
*				followed by a new line.
* Return: Void
*/
void puts2(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
		str++;
	}
	_putchar('\n');
}
