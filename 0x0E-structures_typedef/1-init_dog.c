#include "dog.h"
/**
* init_dog - initialize a variable of type struct dog
* @d: pointer to struct to be passed
* @name: first attrib
* @age: second attrib
* @owner: last attrib
*
* Decsription: function that initialize a variable of type struct dog
* Return: Always(0) success
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
