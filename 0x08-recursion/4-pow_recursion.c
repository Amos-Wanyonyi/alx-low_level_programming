#include "main.h"
/**
 * _pow_recursion - returns the exponents of two numbers x and y
 * @x: First number
 * @y: The second number
 * to calc expontent of x by y is like saying x*x y times
 * Return: 0 if success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
