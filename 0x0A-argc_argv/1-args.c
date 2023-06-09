#include <stdio.h>
/**
* main - Entry point
* @argv: pointer to array of string
* @argc: counter
*
* Description: A program prints the number of arguments passed into it.
*
* Return: 0(success)
*/

int main(int argc, char __attribute__((__unused__))*argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
