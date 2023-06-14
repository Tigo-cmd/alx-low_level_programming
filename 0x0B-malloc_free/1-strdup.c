#include "main.h"
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: array string to be duplicated
*
* Decsription: function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter.
* Return: pointer of the new string
*/
char *_strdup(char *str)
{
	char *str2;
	int i = 0, b = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	str2 = (char *)malloc(i * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	while (b <= i)
	{
		str2[b] = str[b];
		b++;
	}
	return (str2);
}
