#include "main.h"
/**
 * wildcmp - A function that compares two strings
 * @s1: this is string 1
 * @s2: this is string 2
 * Return: 1 is strings are identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));
	}
	return (0);
}

