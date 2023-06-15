#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings.
* @s1: first pointer to string
* @s2: second pointer to string
* @n: last parameter
* Decsription: function that concatenates two strings.
* Return: pointer to allocated memory and NULL if failed
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i = 0, j = 0, sum;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n < j)
	{
		j = n;
		sum = j + i;
		p = malloc(sum + 1);
	}
	if (n >= j)
	{
		sum = j + i;
		p = malloc(sum + 1);
	}
	if (p == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
	{
		p[a] = s1[a];
	}
	for (b = 0; b < j; b++)
	{
		p[a + b] = s2[b];
	}

	p[i + j] = '\0';
	return (p);
}
