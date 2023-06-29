#include "main.h"
/**
 * *_strcat - A function to concatenate strings
 * @src:- the source of the code
 * @dest:- the destination of the code
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
