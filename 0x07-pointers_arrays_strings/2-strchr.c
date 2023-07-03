#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @c: the character to be located
 * @s: pointer to the string
 * Return: pointer to s and NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
