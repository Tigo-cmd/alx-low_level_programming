#include "main.h"
/**
* _strpbrk -  searches a string for any of a set of bytes.
* @s: first param
* @accept: firstparam
*
* Decsription: function that searches a string for any of a set of bytes.
* Return: Always(0) success
*/
char *_strpbrk(char *s, char *accept)
{
	do {
		char *p = accept;

		do {
			if (*a == *s)
				return (s);
			p++;
		} while (*p);
		s++;
	} while (*s);
	return (NULL);
}
