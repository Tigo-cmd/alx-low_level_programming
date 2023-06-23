#include "function_pointers.h"
/**
* array_iterator - executes a function given as a
* parameter on each element of an array.
* @array: array to be executed
* @size: size of the array
* @action: pointer to function to be seen
*
* Decsription: function that executes a function
* given as a parameter on each element of an array.
*
* Return: Always(0) success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
