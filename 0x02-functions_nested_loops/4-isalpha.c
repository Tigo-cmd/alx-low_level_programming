#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 *
 * Description: _isalpha function checks for 
 * alphabetic character.
 * @c : takes a strand of int.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (isalpha(c) == 1024)
		return (1);
	return (0);
}
