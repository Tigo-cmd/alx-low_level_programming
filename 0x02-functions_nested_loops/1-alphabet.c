#include "main.h"
/**
* 1-alphabet.c - 
* @i: starting point for the alphabeth.
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
	return (0);
} 
