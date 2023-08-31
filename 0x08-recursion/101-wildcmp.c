#include "main.h"
/**
 * wildcmp - compares if two strings are identical
 * @s1:the first string
 * @s2: the second string
 * Return: 1 if identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
