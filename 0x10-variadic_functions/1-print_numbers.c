#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - prints numbers
* @separator: string to be printed between numbers
* @n: number of integers to be passed to the function
*
* Decsription: function that prints integers followed by a new line
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list init;
	int i = 0, b = n - 1;

	va_start(init, n);
	while (i < (int)n)
	{
		printf("%d", va_arg(init, int));

		if (i < b && separator != NULL)
		{
			printf("%s", separator);
		}
		++i;
	}
	va_end(init);
	printf("\n");

}
