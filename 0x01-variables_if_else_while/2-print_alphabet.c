#include <stdio.h>
/**
* main - Entry point
*
* Description: A program that prints alphabeths in lower case
*
* Return: 0(success)
*/

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
