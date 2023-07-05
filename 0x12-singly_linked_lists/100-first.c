#include <stdio.h>
/**
* first - Entry point
*
* Description: A program prints
*
* Return: 0(success)
*/

void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, ");
	printf("you must allow,\nI bore my house upon my back!\n");
}
