#include "main.h"
#include <stdio.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the decimal to be changed
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);
	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;
	return (1);
}
