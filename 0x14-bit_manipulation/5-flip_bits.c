#include "main.h"
#include <stdio.h>
/**
 * flip_bits - a function that returns the number of bits needed to flip
 * @n: the first number
 * @m: the second number to flip to
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  diff;
	int counter;

	diff = n ^ m;
	counter = 0;
	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}
	return (counter);
}
