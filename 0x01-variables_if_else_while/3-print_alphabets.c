#include <stdio.h>
/**
* main - Entry point
*
* Description: A program prints the alphabet in
* lowercase, and then in uppercase, followed by a new line.
*
* Return: 0(success)
*/

int main(void)
{
	char b;

	for (b = 'a'; b < 'z'; b++)
	{
		putchar(b);
	}
	for (b = 'A'; b < 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
