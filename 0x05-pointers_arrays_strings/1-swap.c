#include "main.h"
/**
* swap_int - swaps the values of two integers.
* @a: first pointer
* @b: second pointer
*
* Decsription: function that swaps the values of two integers.
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int swaped = *b;

	*b = *a;
	*a = swaped;
}
