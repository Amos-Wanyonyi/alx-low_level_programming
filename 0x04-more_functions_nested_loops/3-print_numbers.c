#include "main.h"
/**
 * print_numbers -  checks for a digit 0 through 9
 * Return: 0 always
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
