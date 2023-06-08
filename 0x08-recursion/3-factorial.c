#include "main.h"
/**
* factorial - prints factorial of a number
* @n: first parameter
*
* Decsription:  function that returns the
* factorial of a given number
* Return: Always(0) success
*/
int factorial(int n)
{
	if (n <  0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
