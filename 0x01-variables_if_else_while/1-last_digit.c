#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
* main - Entry point
*
* Description - this programs checkes wheather a number
* is positive or negative
*
* Return - Always 0 (success)
*/

int main(void)
{
	int n;
	int i;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	i = n % 10;
	
	/* if statement */
	if (i > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, i);
	else if (i == 0)
		printf("the string is 0\n");
	else if (i < 6 && i != 0)
		printf("last digit of %d is %d and is less than 6 ande not 0\n", n, i);

	return (0);
}
