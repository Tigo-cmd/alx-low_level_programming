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
	int i = 0, b;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		while (i < size)
		{
			cmp(array[i]);
			i++;
		}
		if (cmp(array[i]) == 0)
			return (-1);
		else
			b = (array[0]);
	}
	return b;
}
