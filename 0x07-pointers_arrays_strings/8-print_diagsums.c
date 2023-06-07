#include "main.h"
/**
* print_diagsums- prints the sum of the two diagonals of a square matrix
* @a: first param
* @size: second param
*
* Decsription: function that prints the sum of the two
* diagonals of a square matrix of integers.
* Return: Nothing
*/
void print_diagsums(int *a, int size)
{
	int i = 0, diag1, diag2;

	while (i < size)
	{
		diag1 = diag1 + a[i * size + i];
		diag2 = diag2 + a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d", diag1); _putchar(','); _putchar(' ');
	printf("%d", diag2);
	_putchar('\n');
}
