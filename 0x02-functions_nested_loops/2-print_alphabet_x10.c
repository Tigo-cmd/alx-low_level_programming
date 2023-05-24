#include "main.h"
/**
* print_alphabet_x10 - function that prints
* 10 times the alphabet, in lowercase, followed by a new line.
* @i: first operand
* @f: second operand
*
* Decsription: function that prints 10 times
* the alphabet, in lowercase, followed by a new line.
* Return: Always(0) success
*/
void print_alphabet_x10(void)
{
	char i;
	int f;

	while (f <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		f++;
	}
	_putchar('\n');
}
