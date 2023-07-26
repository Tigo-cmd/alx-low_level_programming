#include "main.h"
/**
* clear_bit - clears a bit and sets it to 0
* @n: bit to be cleared
* @index: position of the bit
*
* Return: i if sucess or -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index);
{
	unsigned long int check = (sizeof(unsigned long int) * 8);

	if (index >= check)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
