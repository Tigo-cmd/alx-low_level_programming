#include <stdio.h>
/**
* main - Entry point
*
* Description: A program returns the name of the program
*
* Return: 0(success)
*/

int main(int argc, char *argv[])
{
	if (argc <= 1)
		printf("%s", argv[0]);
	return (0);
}
