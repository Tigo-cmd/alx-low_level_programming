#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
* struct dog - creates a structure named dog
* @name: first attribute
* @owner: second attribute
* @age: last attribute
*
* Description: creates a dog like structure with name owner and the type
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
