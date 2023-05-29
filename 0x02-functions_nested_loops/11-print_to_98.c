#include "main.h"
/**
* print_to_98 - prints all natrual numbers
* @n: first parameter
*
* Decsription: function that prints all natural
* numbers from n to 98, followed by a new line.
* Return: Always(0) success
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	if (n == 98)
		printf("%d", 98);
}
