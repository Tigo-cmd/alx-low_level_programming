#include "main.h"
/**
* _memcpy - copies memory data
* @dest: first param
* @src: second param
* @n: last param
*
* Decsription: function that copies memory area.
* Return: Always(0) success
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;

	for (; n > 0;  n--)
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	return (ptr_dest);
}
