#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sums all its parameters
* @n: fixed parameter
*
* Decsription: function that returns the sum of all its parameters.
* Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0, all = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	while (i < (int)n)
	{
		all = all + va_arg(ap, int);
		i++;
	}

	va_end(ap);
	return (all);
}
