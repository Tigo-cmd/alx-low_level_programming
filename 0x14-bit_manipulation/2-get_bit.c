#include "main.h"
/**
* get_bit - returns the value of the bit of a given index
* @n: number to search
* @index: index to search
*
* Return: value of bit at given index or -1 of failed
*/
int get_bit(unsigned long int n, unsigned int index);
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
