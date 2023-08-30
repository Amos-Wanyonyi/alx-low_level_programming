#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s: the string to be printed
 * Return: 0 on success
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
