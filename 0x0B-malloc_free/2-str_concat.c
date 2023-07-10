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
	int len1, len2, totallen = 0;
	char *concatenate = NULL, *ptr;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		ptr = s1;
		while (*ptr++)
			len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		ptr = s2;
		while (*ptr++)
			len2++;
	}
	totallen = len1 + len2;

	concatenate = malloc((totallen + 1) * sizeof(char));
	if (concatenate == NULL)
		return (NULL);

	ptr = concatenate;
	if (s1 != NULL)
	{
		while (*s1)
			*ptr++ = *s1++;
	}

	if (s2 != NULL)
	{
		while (*s2)
			*ptr++ = *s2++;
	}
	*ptr = '\0';
	return (concatenate);
}
