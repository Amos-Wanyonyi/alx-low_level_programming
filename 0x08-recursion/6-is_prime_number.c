#include "main.h"
/**
 * is_primenumber - checks if a number is a prime number
 * @i: the first number
 * @j: second number
 * Return: success
 */
int is_primenumber(int i, int j)
{
	if (i == j)
		return (1);
	else if  (j % i == 0)
		return (0);
	else
		return  (is_primenumber(i + 1, j));
}

/**
 * is_prime_number - return prime number or not
 * @n: int type
 * Return: always success
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 0)
		return (0);
	return (is_primenumber(2,  n));
}
