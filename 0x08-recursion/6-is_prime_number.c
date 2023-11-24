#include "main.h"
/**
 * is_primenumber_check - checks if a number is a prime number
 * @i: the first number
 * @j: second number
 * Return: success
 */
int is_primenumber_check(int i, int j)
{
	if (i == j)
	{
		return (j);
	}
	else if (j % i == 0)
	{
		return (0);
	}
	return (is_primenumber_check(i + 1, j));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: success
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	return (is_primenumber_check(2, n));
}
