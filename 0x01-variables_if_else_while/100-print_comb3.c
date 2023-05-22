#include <stdio.h>
/**
* main - Entry point
*
* Description: A program possible combinations of two digits
*
* Return: 0(success)
*/

int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = a; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a == 9 || a != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
