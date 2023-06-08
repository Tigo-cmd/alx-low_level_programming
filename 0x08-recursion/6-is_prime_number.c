#include "main.h"
/**
* _prime - determimes the divisor of numbers
* @p: param
* @div: divisor
*
* Decsription: function Number is divisible by a
*  factor other than 1 and itself
* Return: Always(0) success
*/
int _prime(int p, int div);
{
	int b = div - 1;

	if (div == 0)
		return (1);
	if (div != p)
		return (1);
	if (div  == 1)
		return (0);

	return (_prime(p, b));
}
/**
* is_prime_number - input integer is a prime number, otherwise return 0;
* @n: first param
*
* Decsription:  function that returns 1 if the input integer
*  is a prime number, otherwise return 0.
* Return: n
*/
int is_prime_number(int n);
{
	int din = n - 1;

	if (n <= 1)
		return (0);

	return (!_prime(n, n - 1));
}
