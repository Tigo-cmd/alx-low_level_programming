#include "main.h"
/**
* print_last_digit-  prints last digits
* @c: first paramater
*
* Decsription: function that prints the last digit of a number.
* Return: Always(0) success
*/
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	{
		c = c / -1;
	}
	_putchar('0' + c);
	return (c);
}
