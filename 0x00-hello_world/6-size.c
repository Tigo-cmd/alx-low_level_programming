#include <stdio.h>
/**
* main - Entry point
*
* Description: A program that prints the size of
* various types on the computer it is compiled and run on.
*
* Return: 0(success)
*/

int main(void)
{
	/*64bit machine*/
	printf("Size of a char: 1 byte(s)\n");
	printf("Size of an int: 4 byte(s)\n");
	printf("Size of a long int: 8 byte(s)\n");
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: 4 byte(s)\n");

	return (0);
}
