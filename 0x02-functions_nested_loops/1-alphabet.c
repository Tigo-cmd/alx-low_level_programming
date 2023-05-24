#include "main.h"
/**
* print_alphabet - prints alpha
* @i: first operand.
*
* Decsription: function that prints the alphabet,
* in lowercase, followed by a new line
* Return: Always(0) success
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
