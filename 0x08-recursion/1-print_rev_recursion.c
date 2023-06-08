#include "main.h"
/**
* _print_rev_recursion - prints sting in reverse
* @s: first parameter
*
* Decsription: function that prints a string in reverse
* Return: Always(0) success
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
