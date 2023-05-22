#include <stdio.h>
/**
* main - Entry point
*
* Description: A program that prints all
* possible combinations of single-digit numbers.
*
* Return: 0(success)
*/

int main(void)
{
	int g;

	for (g = 0; g <= 9; g++)
	{
		putchar(g + '0');
		if (g != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
