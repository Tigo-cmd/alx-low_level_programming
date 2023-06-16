#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: array to be allocated
* @size: size of byte
*
* Decsription: function that allocates memory for an array, using malloc.
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int p = nmemb * size, f = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	while (f < p)
	{
		a[f] = 0;
		f++;
	}
	a = (void *)a;
	return (a);
}
