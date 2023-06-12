#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point
* @argc: counter
* @argv: pointer array
* Description: A program that adds positive numbers.
*
* Return: 0(success)
*/

int main(int argc, char *argv[])
{
	int argc_Count, fin = 0;

	if (argc <= 1)
		printf("0\n");
	for (argc_Count = 1; argc_Count < argc; argc_Count++)
	{
		int array_Count = 0;

		while (argv[argc_Count][array_Count] != '\0')
		{
			if (isalpha(argv[argc_Count][array_Count]))
			{
				printf("Error\n");
				return (1);
			}
			array_Count++;
		}
		fin = fin + atoi(argv[argc_Count]);
	}
	if (fin == 0)
		return (0);
	printf("%d\n", fin);
	return (0);
}
