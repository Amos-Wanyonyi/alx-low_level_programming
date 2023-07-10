#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2 = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	p = malloc((size1 + size2 + 1) * sizeof(char));
		if (p == NULL)
			return (0);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (size1 + size2); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (0);
}