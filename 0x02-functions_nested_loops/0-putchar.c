#include <stdio.h>
/**
* main - Entry point
*
* Description: A program prints "_putchar" followed
* by a new line
*
* Return: 0(success)
*/

int main(void)
{
	char f[] = "_putchar";
	int i;

	while (i < 10)
	{
		i++;
		putchar(f[i]);
	}
	putchar('\n');
	return (0);
}
