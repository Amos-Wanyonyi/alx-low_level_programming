#include <stdio.h>
/**
 * print_array - A function that prints n elements of an interger
 * @a: - This is the input array
 * @n: - length of an array
 */
void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);
		if (array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
