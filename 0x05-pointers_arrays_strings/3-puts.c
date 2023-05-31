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
	int count;

	for (count = 0; *str != '\0'; count++)
	{
		_putchar(str[count]);
		str++;
	}
}
