#include "main.h"
/**
* _strlen - returns the length of a string.
* @s: first integer
*
* Decsription: function that returns the length of a string.
* Return: integer
*/
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
