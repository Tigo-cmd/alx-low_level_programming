#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_all - prints anything according to the format
* @format: list of types of argument passed to the function
*
* Decsription: function that prints anything
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list ugo;


	int init;
	int i;
	char c;
	float f;
	char *s;

	va_start(ugo, format);
	init = 0;
	while (format[init])
	{
		switch (format[init])
		{
			case 'c':
				c = va_arg(ugo, int);
				printf("%c, ", c);
				break;
			case 'i':
				i = va_arg(ugo, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = va_arg(ugo, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(ugo, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		++init;
	}
	printf("\n");
	va_end(ugo);
}
