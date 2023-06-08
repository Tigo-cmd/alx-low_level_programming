#include "main.h"
/**
* _strlen_recursion - prints length of a string
* @s: first parameter
*
* Decsription: function that prints length of a string
* Return: Nothing.
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i++;
	return (i + _strlen_recursion(s + 1));
}
