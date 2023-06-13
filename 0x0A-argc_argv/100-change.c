#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: initialized counter
* @argv: array pointer
*
* Description: A program that prints the minimum
* number of coins to make change for an amount of money.
*
* Return: 0(success)
*/

int main(int argc, char *argv[])
{
	int div, i, small = 0;
	int cent[] = {25, 10, 5, 2, 1};

	argc += -1; /* argc is set to 0 */

	if (argc == 1)
	{
		div = atoi(argv[1]);

		if (div < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; cent[i] != '\0'; i++)
		{
			small = small + (div / cent[i]);
			div = div % cent[i];
		}
		printf("%d\n", small);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
