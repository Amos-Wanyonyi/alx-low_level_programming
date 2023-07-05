#include "main.h"
/**
 * _strlen_recursion - this function returns the length of the string
 * @s: the string to check the length of
 * Return: 0 always
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return ((1 + _strlen_recursion(s + 1)));
			}
