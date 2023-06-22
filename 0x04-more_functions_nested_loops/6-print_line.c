#include "main.h"
/**
 * print_line - print straight line
 * @n: - the number of times the line should be printed
 * Return: 0 always
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
