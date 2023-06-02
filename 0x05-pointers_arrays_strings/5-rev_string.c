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
	int main = 0, rev, m;

	while (s[main] != '\0')
	{
		main++;
	}
	m = 0;
	rev = --main;
	while (m < rev)
	{
		char swap = s[m];

		s[m] = s[rev];
		s[rev] = swap;

		m++;
		rev--;
	}
}
