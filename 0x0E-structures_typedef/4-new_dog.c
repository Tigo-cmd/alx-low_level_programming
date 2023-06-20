#include "dog.h"
#include <stdlib.h>

/**
* _length - gets length of a string
* @str: pointer to string
*
* Description: function that gets length of string passed
* Return: length
*/
int _length(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
*  _copy - copy string form source to destination
* @dest: destination
* @src: source
*
* Description: function that copies string
* Return: @dest
*/
char *_copy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';

	return (dest);
}
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

	p->name = malloc((_length(name) + 1) * sizeof(char));
	p->owner = malloc(sizeof(char) * (_length(owner) + 1);
	if (p->owner == NULL || p->name == NULL)
	{
		free(p->name);
		free(p->owner)
		free(p);
		return (NULL);
	}
	p->name = _copy(p->name, name);
	p->owner = _copy(p->owner, owner);
	p->age = age;

	return (p);
}
