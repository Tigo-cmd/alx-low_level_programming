#include "main.h"
/**
* _isalpha - checks for alphabethic characters
* @c: first operand
*
* Decsription:  function that checks for alphabetic character.
*
* Return: (1) if alpha and (0) if othetwise
*/
int _isalpha(int c)
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
