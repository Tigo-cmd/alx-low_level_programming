#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: first string to be concatenated
* @s2: second srting to be concatenated
*
* Decsription: function that concatenates two strings
* Return: pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *p;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	int i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	int j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}
	int sum = i + j;

	p = (char *)malloc((sum * sizeof(char)) + 1);

	if (p == NULL)
		return (NULL);
	int a = 0;

	while (a < i)
	{
		p[a] = s1[a];
		a++;
	}
	int b = 0;

	while (b < j)
	{
		p[a + b] = s2[b];
		b++;
	}
	p[i + j] = '\0';
	return (p);
}
