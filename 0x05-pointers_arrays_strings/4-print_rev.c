#include "main.h"
/**
* print_rev - function that prints a string, in reverse,
* @s: first parameter
*
* Decsription:  function that prints a string, in
* reverse, followed by a new line.
* Return: Always(0) success
*/
void print_rev(char *s)
{
	int count = 0, var;

	while (s[count] != '\0')
	{
		count++;
	}
	var = count - 1;
	while (var >= 0)
	{
		_putchar(s[var]);
		var--;
	}
	_putchar('\n');
}
