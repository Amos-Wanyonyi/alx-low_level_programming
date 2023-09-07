#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory to an array using malloc
 * @nmemb: number of members
 * @size: size of byte
 * Return: pointer to the allocated memory array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, b = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	b = nmemb * size;
	p = malloc(b);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < b)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
