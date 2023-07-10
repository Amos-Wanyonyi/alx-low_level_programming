#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array
 * @c: what to initialize
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	return (NULL);
	p = malloc((size) * sizeof(char));
	if (p == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
return (p);
}