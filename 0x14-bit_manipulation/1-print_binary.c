#include "main.h"
#include <stdio.h>
/**
 * print_binary -prints the binary representation of a number
 * @n: the number to be printend
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int shifts = 0;

	if (n == 0)
		return;
	while (temp > 0)
	{
		temp >>= 1;
		shifts++;
	}
	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
