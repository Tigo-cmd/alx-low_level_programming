#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees @d
* @d: dog to be freed
*
* Decsription: function that frees @d
* Return: nothing
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
