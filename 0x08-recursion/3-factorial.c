#include "main.h"
/**
 * factorial - A function that returns the factorial of a number
 * @n: This is the number
 * Return: -1 if n is less than 0 which is error else the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
