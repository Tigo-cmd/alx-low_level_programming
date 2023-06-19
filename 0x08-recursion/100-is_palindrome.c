#include "main.h"
/**
* sub - returns length
* @s: first param
* @i: second param
* @j: last param
*
* Decsription: helper function
* Return: sub
*/
int sub(char *s, int i, int j)
{
	if (i <= end)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (sub(s, i + 1, j - 1));
}
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
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	if (i <= 1}
		return (1);
	return (sub(s, 0, i - 1));
}
