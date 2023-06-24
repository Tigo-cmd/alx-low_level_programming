#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_strings - prints strings.
* @separator: string to be printed between strings
* @n: number of strings passed to the function
*
* Decsription: function that prints strings followed by a new line.
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = 0, b = n - 1;

	va_start(ap, n);
	while (i < (int)n)
	{
		char *ugo = va_arg(ap, char*);

		if (ugo == NULL)
			ugo = "(nil)";
		printf("%s", ugo);
		if (i < b && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
