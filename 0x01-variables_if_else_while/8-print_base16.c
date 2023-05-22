#include <stdio.h>
/**
* main - Entry point
*
* Description: A program print the 16 hexadcimal figures
*
* Return: 0(success)
*/

int main(void)
{
	int a = 0;
	char c;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
