#include "dog.h"
#include <stdlib.h>
/**
* print_dog - prints a struct dog
* @d: pointer to attributes to be printed
*
* Decsription: function that prints a struct dog
* Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
