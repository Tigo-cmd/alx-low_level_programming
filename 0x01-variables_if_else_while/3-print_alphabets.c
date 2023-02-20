#include <stdio.h>


/*
* main - this is the main function
*
* Description: this program prints the alpha 
* in lower and uppercase using putchar function only
*
* Return: Always (0) success
*/

int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	while (lower_alpha <= 'z')
	{
		/* code */
		putchar(lower_alpha);
		lower_alpha++;
	}

	while (upper_alpha <= 'Z')
	{
		/* code */
		putchar(upper_alpha);
		upper_alpha++;
	}
	putchar('\n');

	return(0);

}
