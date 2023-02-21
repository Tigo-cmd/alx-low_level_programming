#include <stdio.h>

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/
int main(void)
{
	/*main function*/
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}
/*print_last_alphabeth function*/
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	putchar(lastDigit + '0');
	return (lastDigit);
}
