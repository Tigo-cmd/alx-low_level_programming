#include <stdio.h>
/**
* main - Entry point
*
* Description: A program that prints the alphabet
* in lowercase, followed by a new line.
*
* Return: 0(success)
*/

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
		if (b == 'd')
			b = 'e';
		if (b == 'p')
			b = 'q';
	}
	putchar('\n');
	return (0);
}
