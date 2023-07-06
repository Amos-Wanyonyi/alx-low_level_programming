#include "main.h"
/**
 * _pow_recursion - prints the value of x raised to the power of y
 * @x: is the number to be raised to
 * @y: is the power number
 * Return: -1 if y is less than 0 else return the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
