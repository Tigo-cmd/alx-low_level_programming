#include "main.h"
/**
* _strspn - prints prefix of a substring
* @s: first param
* @accept: second param
*
* Decsription: function that prints prefix of a string
* Return: Always(0) success
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	do {
		char *p = accept;

		do {
			if (*s == *p)
			{
				i++;
				break;
			}
			p++;
		} while (*p);
		if (*p == '\0')
			return (i);
		s++;
	} while (*s && *accept);
	return (i);
}
