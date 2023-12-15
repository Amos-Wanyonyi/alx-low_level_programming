#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number, or 0 if chars b is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
        unsigned int power = 1;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			result += power;
	}
	return (result);
}
