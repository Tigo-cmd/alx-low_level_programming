#include "main.h"
/**
* flip_bits - returns the number of bits you
* would need to flip to get from one number to another.
* @n: first param
* @m: second param
*
* Return: no of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tot = n ^ m;
	unsigned long int ite = 0;

	for (; tot != 0; tot = tot >> 1)
	{
		ite = ite + (tot & 1);
	}
	return (ite);
}
