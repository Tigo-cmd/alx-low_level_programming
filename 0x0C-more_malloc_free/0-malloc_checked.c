#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc.
* @b: number of memory to be allocated
*
* Decsription:  function that allocates memory using malloc.
* Return: pointer to allocated mem
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == 0)
		exit(98);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
