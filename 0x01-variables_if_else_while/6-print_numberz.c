#include <stdio.h>
/**
* main - Entry point
*
* Description: A program print the alphabeths without using the char
*
* Return: 0(success)
*/

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
