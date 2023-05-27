#include "main.h"
/**
* times_table - prints the 9 times tabile starting with 0
*
* Decsription: function that prints the 9 times table, starting with 0
* Return: Always(0) success
*/
void times_table(void)
{
	int i, j, num;

	num = 9;
	for (i = 0; i <= num; ++i)
	{
		for (j = 0; j <= num; j++)
		{
			printf("%d", i * j);
			if (j < num)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
