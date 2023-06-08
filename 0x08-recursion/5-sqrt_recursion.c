#include "main.h"
/**
* _func - initalizes sqrt acts as a helper
* @p: func first param
* @i: runner param
* Decsription: functions that returns the natural square root of a number.
* Return: helper recursion
*/
int _func(int p, int i)
{
	int mul;

	mul = i * i;
	if (mul == p)
		return (i);
	if (mul > p)
		return (-1);
	else
		return (_func(p, i + 1));
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: parameter
* Decsription: functions that returns the natural square root of a number.
* Return: sqrt of number
*/
int _sqrt_recursion(int n)
{
	int b = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_func(p, b));
}
