#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int size1, size2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = 0;
	while (s1[size1] != '\0')
		size1++;
	size2 = 0;
	while (s2[size2] != '\0')
		size2++;
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
