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
	_putchar('0' + c);
	return (c);
}
