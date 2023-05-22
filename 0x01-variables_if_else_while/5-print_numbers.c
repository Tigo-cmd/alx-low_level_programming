#include <stdio.h>
/**
* main - Entry point
*
* Description: A program that prints all
* single digit numbers of base 10 starting from 0
*
* Return: 0(success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("$d\n", i);
	}
	return (0);
}
