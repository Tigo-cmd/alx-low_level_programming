#include "main.h"
/**
* _isdigit - checks for a digit (0 through 1)
* @c: first integer
*
* Decsription: function that checks for a digit (0 through 9)
* Return: Always(0) success
*/
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
