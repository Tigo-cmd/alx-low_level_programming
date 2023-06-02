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
	int count;

	for (count = -1; *s != '\0'; count++)
	{
		_putchar(s[count]);
		s++;
	}
}
