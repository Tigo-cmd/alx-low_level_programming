#include "main.h"
/**
* _isalpha - checks for alphabethic characters
* @c: first operand
*
* Decsription:  function that checks for alphabetic character.
*
* Return: (1) if alpha and (0) if othetwise
*/
int _isalpha(int c);
{
	if (c >= 90 || c < 65)
		return (0);
	else
		return (1);
}
