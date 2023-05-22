#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Description: A program thats prints the last digit of a integer.
*
* Return: 0(success)
*/

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, lastdigit);
	if (lastdigit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	if (lastdigit < 6 && lastdigit != 0)
		printf("Last digit of %d is %d and is less "
		"than 6 and not 0\n", n, lastdigit);
	return (0);
}
