#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - contains a copy of the string as given in
 * @str: string to duplicate
 * Return: pointer to the string
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *ret;

	if (!str)
		return (NULL);
	ptr = str;
	while (*ptr++)
		size++;
	ret = malloc(size + 1);
	if (!ret)
		return (NULL);
	ptr = ret;
	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';
	return (ret);
}
