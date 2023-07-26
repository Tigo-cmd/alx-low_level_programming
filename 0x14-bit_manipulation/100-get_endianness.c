#include "main.h"
/**
* get_endianness - CHECKS for endianness
*
* Return: 0 for big endia or 1 for small endain
*/
int get_endianness(void)
{
	int end = 1;
	char *main_word = (char *) &end;

	if (*main_word != 1)
		return (0);
	else
		return (1);
}
