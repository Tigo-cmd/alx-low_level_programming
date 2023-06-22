#include "function_pointers.h"
/**
* print_name - prints a name
* @f: function pointer
* @name: name to print
*
* Decsription: Function that prints a name
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
