#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
		_putchar(ch);
	_putchar('\n');
}
