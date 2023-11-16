#include <stdio.h>
/**
 * _print_rev_recursion - reverses a string
 * @s: is the string to be reversed
 * Return: the reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
