#include "function_pointers.h"
/**
* array_iterator - executes a function given as a
* parameter on each element of an array.
* @array: array to be executed
* @size: size of array
* @action: pointer to function to be seen
*
* Decsription: function that executes a function
* given as a parameter on each element of an array.
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int));
{
	int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
