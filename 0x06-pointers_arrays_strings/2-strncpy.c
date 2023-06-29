#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @src: The source of the string
 * @dest: The destination of the string
 * @n: The maximum number to copy from src
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
