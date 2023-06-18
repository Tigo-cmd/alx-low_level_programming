#include <stdio.h>
/**
* main - Entry point
*
* Description: A program performs The “Fizz-Buzz test” 
*
* Return: 0(success)
*/

int main(void)
{
	int p;

	for (p = 0; p <= 100; p++)
	{
		if (p % 3 == 0 && p % 5 == 0 && p != 0)
			printf("FizzBuzz ");
		else if (p % 3 == 0 && p != 0)
			printf("Fizz ");
		else if (p % 5 == 0 && p != 0)
			printf("Buzz ");
		else
			printf("%d ", p);
	}
	return (0);		
}
