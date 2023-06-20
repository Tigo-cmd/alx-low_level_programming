#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates a new dog struct
* @name: first attrib
* @age: second attrib
* @owner: last struct attrib
*
* Decsription: function that creates a new dog.
* Return: Always(0) success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	
	free(p);

	return (p);
}
