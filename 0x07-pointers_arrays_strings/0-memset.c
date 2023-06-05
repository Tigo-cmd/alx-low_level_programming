
#include "main.h"
/**
* _memset - prints a constant byte
* @s: first pointer
* @b: second parameter
* @n: third parameter
*
* Decsription: function that fills memory with a constant byte.
* Return: Always(0) success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		s[p] = b;
		p++;
	}
	return (s);
}
