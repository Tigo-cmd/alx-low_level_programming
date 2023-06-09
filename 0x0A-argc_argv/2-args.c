#include <stdio.h>
/**
* main - Entry point
* @argc: counter
* @argv: pointer to array of strings
*
* Description: A program that prints all arguments it receives.
*
* Return: 0(success)
*/

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
