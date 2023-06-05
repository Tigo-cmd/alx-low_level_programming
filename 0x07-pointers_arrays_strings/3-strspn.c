#include "main.h"
/**
* _strspn - prints prefix of a substring
* @s: first param
* @accept: second param
*
* Decsription: function that prints prefix of a string
* Return: Always(0) success
*/
char *_strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	do {
		j = 0;
		char *p = accept;

		do {
			if (*s == *p)
			{
				j = 1;
				break;
			}
			p++;
		} while (*p);
		if (!j)
			break;
		i++;
		s++;
	} while (*s);
	return (i);
}
