#include "main.h"
/**
* print_binary -  function that prints the binary representation of a number.
* @n: number to be converted to binary
*
* Return: return nothing.
*/
void print_binary(unsigned long int n)
{
	int b = 63, bit_count = 0;
	unsigned long int bit;

	while (b >= 0)
	{
		bit = n >> b;

		if (bit & 1)
		{
			_putchar('1');
			bit_count++;
		}
		else if (bit_count)
			_putchar('0');
		b--;
	}
	if (!bit_count)
		_putchar('0');
}
