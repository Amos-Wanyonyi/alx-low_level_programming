#include "main.h"
#include <stdio.h>
/**
 * _natural_square - checks if a number isa natural square
 * @a: the first number
 * @b: the second number
 * Return: success
 */
int _natural_square(int a, int b)
{
	if (a == b * b)
		return (b);
	if (b * b > a)
		return (-1);
	return (_natural_square(a, b + 1));
}
/**
 * _sqrt_recursion - checks if a number is a natural square
 * @n: the number
 * Return: success
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (_natural_square(n, 1));
}
