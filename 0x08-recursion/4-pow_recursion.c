#include "main.h"
/**
 * _pow_recursion - fxn that returns the power of a x^y
 * @x: the first number
 * @y: the second number
 * Return: the raised fxn
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
