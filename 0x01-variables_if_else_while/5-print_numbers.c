#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if success
 */
int main(void)
{
	int num;
	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf('\n');
	return (0);
}
