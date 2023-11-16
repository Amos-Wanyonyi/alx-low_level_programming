#include <stdio.h>
/**
 * _strlen_recursion - calculates the length of a string
 * @s: is the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
