#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: The number to find the factorial of
 * Return: 1 if success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
