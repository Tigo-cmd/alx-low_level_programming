#include "main.h"
/**
* *_strstr - locates a substring
* @haystack: first param
* @needle: second param
*
* Decsription: function that locates a substring
* Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *p = needle;

	if (*p == '\0')
		return (haystack);
	do {
		char *init = haystack;
		char *form = needle;

		do {
			init++;
			form++;
		} while (*init && *form && *init == *form);
		if (*form == '\0')
			return (haystack);
		haystack++;
	} while (*haystack);
	return (NULL);
}
