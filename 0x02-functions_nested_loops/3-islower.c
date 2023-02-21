#include <stdio.h>
#include <ctype.h>

/**
 * _islower - function to check if
 *           character is lowercase
 * Description: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 * otherwise always 0 (Success)
*/

int main(void)
{
	/*main function*/
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return(0);
}
/*_islower function*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
