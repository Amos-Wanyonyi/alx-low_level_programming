#include "main.h"
/**
 * _strlen_recursion - prints the length of the string
 * @s: the string to find the length of
 * Return: 0on success
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
