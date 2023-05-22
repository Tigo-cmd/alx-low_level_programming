#include <stdio.h>
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
		printf("%d\n", "is positive");
	if (n < 0)
		printf("%d\n", "is negative");
	else
		printf("%d\n", "is zero");
	return (0);
}
