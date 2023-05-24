#include "main.h"
/**
* print_sign - prints the sign of a number.
* @n: first operand
*
* Decsription: function that prints the sign of a number.
*
* Return: (1) if positive, (-1) negative (0) if zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
}
