#include "main.h"
/**
* rev_string - reverses a string.
* @s: pointer to array string
*
* Decsription: function that reverses a string.
* Return: nothing
*/
void rev_string(char *s)
{
	int main = 0, rev;

	while (s[main] != '\0')
	{
		main++;
	}
	rev = --main;
	while (rev >= 0)
	{
		_putchar(s[rev])
		rev--;
	}
}
