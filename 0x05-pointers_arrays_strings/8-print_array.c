#include "main.h"
/**
* print_array - prints n elements of an array of integers
* @a: first parameter
* @n: second parameter
*
* Decsription: function that prints n elements of
* an array of integers, followed by a new line.
* Return: Always(0) success
*/
void print_array(int *a, int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		if (i == n - 1)
			printf("%d", a[i]);
	}
	_putchar('\n');
}
