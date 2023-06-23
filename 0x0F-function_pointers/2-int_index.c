#include "function_pointers.h"
/**
* int_index -  returns the index of the first
* element for which the cmp function does not return 0
* @array: array to be searched
* @size: no. of element in the array
* @cmp: pointer to the function to be used to compare values
*
* Decsription: function that searches for an integer.
* Return:  index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
