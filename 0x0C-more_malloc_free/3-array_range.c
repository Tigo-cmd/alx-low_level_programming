#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: starter parameter
* @max: count of the starter
*
* Decsription: Write a function that creates an array of integers.
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int i, *p, g = 0;

	/*min = min + 1;*/
	if (min < max)
		return (NULL);
	i = max - min + 1;
	p = malloc(i * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (g < i)
	{
		p[g] = min + g;
		g++;
	}
	return (p);
}
