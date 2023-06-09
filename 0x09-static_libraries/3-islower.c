#include "main.h"
/**
* _islower - checks for lowercase alphabeths
* @c: first operand
*
* Decsription:  function that checks for lowercase character
*
* Return: returns 1 if lowercase and 0 if othwerwise
*/
int _islower(int c)
{
	if (c >= 122 || c < 97)
		return (0);
	else
		return (1);

}
