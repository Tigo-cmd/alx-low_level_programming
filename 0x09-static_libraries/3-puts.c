#include "main.h"
/**
* _puts - prints a string
* @str: first parameter
*
* Decsription: function that prints a string,
* followed by a new line, to stdout
* Return: Always(0) success
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
