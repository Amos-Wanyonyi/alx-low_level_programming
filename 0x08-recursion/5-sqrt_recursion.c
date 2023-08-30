#include "main.h"
/**
 * square_root - returns the power of a function
 * @n: The original number
 * @y: counter to compare multiplication
 * Return: the square root
 */
int square_root(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, y + 1));
	}
}

/**
 * _sqrt_recursion - a function that returns the natu square root of a number
 * @n: the number
 * Return: 0 if success
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
