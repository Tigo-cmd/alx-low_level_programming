#include "main.h"
/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: first param
*
* Decsription: function that returns 1 if a string is
*  a palindrome and 0 if not.
* Return: is_palindrome
*/
int is_palindrome(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (1);
	if (*(s + i) == '\0')
		return (1);
	if (*s != *(s + i))
		return (0);

	return (is_palindrome(s + 1));
}
