#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find the length of  a string
 * @s: the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}
/**
 * *_strdup - pointer to a newly allocated space
 * @str: pointer to a string array
 * Return: pointer to the new created string
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
