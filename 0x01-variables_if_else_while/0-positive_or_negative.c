#include <stdlib.h>
#include <time.h>
/**
* main - Enrty point
*
* Description: this program prints wheather a
* random number is positive or negative
*
* Return: Always 0 (Sucsess)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("strand of int\n");
	return (0);
}
