#include "3-calc.h"
/**
* get_op_func - selects the correct function to perform
* the operation asked by the user
* @s: operator passed as argument to the program
*
* Decsription:  function that selects the correct
*           function to perform the operation asked by the user
*		example get_op_func("-") == op_sub;
* Return: pointer to the function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0, b = 5;

	while (i < b)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
