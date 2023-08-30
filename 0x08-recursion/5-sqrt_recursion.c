#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natu square root of a number
 * @n: the number
 * Return: 0 if success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int x = n;
		int y = 1.0;
		int precision = 0.00001;

		while (x - y > precision)
		{
			x = (x + y) / 2;
			y = n / x;
		}
		return (x);
	}
}
