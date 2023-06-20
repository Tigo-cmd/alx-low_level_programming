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
typedef struct dog dog_t;
char *_copy(char *dest, char *src);
int _length(const char *str);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
