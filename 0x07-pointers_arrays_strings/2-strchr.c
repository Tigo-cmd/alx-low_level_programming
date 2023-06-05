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
	for (; s != '\0'; s++)
	{
		if (*s == '\0')
			return (s);
		if (c == '\0')
			rerurn (s);
	}
	return NULL;
}
