#include "main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: pointer to a string of 0 and 1 chars
*
* Return: converted number, or 0 if fail
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[p] != '\0')
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
		dec = dec * 2 + (b[p] - '0');
		p++;
	}
	return (dec);
}
