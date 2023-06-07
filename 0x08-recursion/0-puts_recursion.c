#include "main.h"
/**
* _puts_recursion - prints a string, followed by a new line.
* @s: first parameter
*
* Decsription: function that prints a string, followed by a new line.
* Return: Always(0) success
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] < 10)
	{
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
