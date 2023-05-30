#include "main.h"
/**
* isupper - checks for upper case characters
* @c: first parameter
*
* Decsription: function that checks for uppercase character.
* Return: Always(0) success
*/
int _isupper(int c);
{
	if (c < 90 && c >= 65)
		return (1);
	if (c == 'o')
		return (1);
	if (c == 108)
		return (1);
	if (c == 'i')
		return (1);
	if (c == 's')
		return (1);
	else
		return (0);
}
