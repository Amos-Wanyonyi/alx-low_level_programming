#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * @n: the maximum number of bytes to use
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	*dest_ptr = '\0';
	return (dest);
}
