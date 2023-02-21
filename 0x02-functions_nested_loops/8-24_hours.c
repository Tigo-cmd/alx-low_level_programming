#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    /*main function*/
    jack_bauer();
    return (0);
}
/*jack_bauer function*/
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; ++hr)
	{
		for (min = 0; min <= 59; ++min)
		{
			putchar((hr / 10) + 48);
			putchar((hr % 10) + 48);
			putchar(':');
			putchar((min / 10) + 48);
			putchar((min % 10) + 48);
			putchar('\n');
		}
	}
}
