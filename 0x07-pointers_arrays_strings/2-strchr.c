#include "main.h"
/**
* _strchr - locates char in a string
* @s: first parameter
* @c: second parameter
*
* Decsription: function that locates a character in a string.
* Return: NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		if (c == '\0')
			return s;
		s++;
	}
	return NULL;
}
