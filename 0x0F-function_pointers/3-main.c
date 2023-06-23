#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - Entry point
* @argc: argument counter
* @argv: pointer array to first agument index
* Description: A program that performs simple arithimetic operations.
*
* Return: 0(success)
*/

int main(int argc, char *argv[])
{
	int a, b, i = 1;
	char *op;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (b == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (op[i] != '\0' || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
