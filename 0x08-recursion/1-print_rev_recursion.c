#include "main.h"
/**
<<<<<<< HEAD
* _print_rev_recursion - prints a string in reverse.
* @s: first pointer
*
* Decsription: function that prints a string in reverse.
=======
* _print_rev_recursion - prints sting in reverse
* @s: first parameter
*
* Decsription: function that prints a string in reverse
>>>>>>> refs/remotes/origin/main
* Return: Always(0) success
*/
void _print_rev_recursion(char *s)
{
<<<<<<< HEAD
	
=======
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
>>>>>>> refs/remotes/origin/main
}
