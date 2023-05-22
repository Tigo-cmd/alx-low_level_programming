#include <stdio.h>
/**
* main - Entry point
*
* Description: A program print the alphabeths
* in reverse order in lowercase
*
* Return: 0(success)
*/

int main(void)
{
	char t;

	for (t = 'z'; t >='a'; t--)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
