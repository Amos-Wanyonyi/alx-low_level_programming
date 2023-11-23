#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: an int type
 * @size: an int type
 * Return: pointer to the allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < total; count++)
	{
		ptr[count] = 0;
	}
	return (ptr);
}
