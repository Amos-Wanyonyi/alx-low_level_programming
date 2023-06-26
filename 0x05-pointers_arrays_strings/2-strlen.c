#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: String to be checked
 * Return: 0 always
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
