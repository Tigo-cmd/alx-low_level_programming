#include <stdio.h>
/**
* main - Entry point
*
* Description: A program to print using putchar function
*
* Return: 0(success)
*/

int main(void)
{
	char wrd[58] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	int i;


	for (i = 0; i < 58; i++)
	{
		putchar(wrd[i]);
	}
	putchar('\n');
	return (1);
}
