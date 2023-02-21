#include <stdio.h>

/**
 * Main - main Entry
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
 * Return: Always (0)
*/

int main(void)
{
	print_alphabet();
	return(0);
}

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}

