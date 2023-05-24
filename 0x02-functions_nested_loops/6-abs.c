#include "main.h"
/**
* _abs - prints absolute integer
* @c: first parameter
*
* Decsription:  function that computes the absolute value of an integer.
*
* Return: Always(int) success
*/
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	else if (c > 0)
	{
		c = c;
	}
	return (0);
}
