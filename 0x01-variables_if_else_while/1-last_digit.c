#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	i = n % 10; /*gets last digit*/

	if (i > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, i);
	else if (i == 0)
		printf("Last digit of %i is %i and is 0\n", n, i);
	else if (i < 6 && i != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, i);

	return (0);
}
