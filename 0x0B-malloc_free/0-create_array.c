#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: the size of the memory to print
* @c: array to print
*
* Decsription: function that creates an array of chars,
*  and initializes it with a specific char.
* Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int b = 0;

	if (size == 0)
		return (NULL);
	char *a = (char *)malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);
	while (b < size)
	{
		a[b] = c;
		b++;
	}
	return (a);
}
