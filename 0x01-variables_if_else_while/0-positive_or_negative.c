#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A program that indicates a positive or negative num
*
* Return: 0(success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	return (0);
}
