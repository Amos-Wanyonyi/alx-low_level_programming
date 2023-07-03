#include "main.h"
/**
 * _memcpy - copies the memory area
 * @src: source of the copied bytes
 * @dest: destination of the copied bytes
 * @n: The number of bytes to be copied
 * Return: pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
