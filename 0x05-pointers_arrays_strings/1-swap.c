#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers.
 * @a: - swaps and stores the value of b
 * @b: - swaps and stores that value of a
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int change = *b;
	*b = *a;
	*a = change;
}
