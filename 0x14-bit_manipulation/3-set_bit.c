#include "main.h"
/**
* set_bit - function that sets the value of a bit to 1 at a given index.
* @n: number to be set
* @index: index is the index, starting from 0 of the bit you want to set
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index >= sizeof(*n) * 8)
		return (-1);

	value = 1UL << index;
	*n = *n | value;
	return (1);
}
