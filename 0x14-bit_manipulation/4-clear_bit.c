#include "main.h"
#include <stdio.h>
/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @index:  is the index, starting from 0 of the bit you want to set
 * @n: pointe to the number
 * Return: 1 if it worked, -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;
	unsigned long int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (p = 1; hold > 0; hold--, p *= 2)
		;
	if ((*n >> index) & 1)
		*n -= p;
	return (1);
}
