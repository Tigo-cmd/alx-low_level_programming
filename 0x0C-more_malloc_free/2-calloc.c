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
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc((nmemb + 1) * size);
	if (a == NULL)
		return (NULL);
	return (a);
}
