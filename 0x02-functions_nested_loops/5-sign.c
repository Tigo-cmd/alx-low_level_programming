#include <stdio.h>
#include <ctype.h>

/**
 * _main - main entry
 * 
 * Description: checks input of function
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	/*Main function*/
    int r;

    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(-1);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}
/*Print_sign function*/
int print_sign(int c)
 {
	if (c > 0)
	{
		putchar('+');
		return(1);
	}
	else if (c == 0)
	{
		putchar('0');
		return(0);
	}
	else if (c < 0 )
	{
		putchar('-');
		return(-1);
	}
	return(0);
 }
