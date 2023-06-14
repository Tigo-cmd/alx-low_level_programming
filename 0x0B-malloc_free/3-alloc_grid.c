#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: first param
* @height: second param
*
* Decsription: function that returns a
* pointer to a 2 dimensional array of integers
* Return: Always(0) success
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	while (i < height)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			return (NULL);
		}
		i++;
	}
	return (p);
}
