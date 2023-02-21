#include <stdio.h>

/**
 * Main - Main Entry
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *Return : Always (0)
*/

int main(void)
{
	/*my statement*/
	print_alphabet_x10();
	return(0);
}
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			putchar(ch);
		putchar('\n');
	}
}
