#include "main.h"
/**
 * *_strcat - A function to concatenate strings
 * @src:- the source of the code
 * @dest:- the destination of the code
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	/*char *dest_ptr = dest;*/

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
