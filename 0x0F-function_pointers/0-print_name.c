#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: pointer to the printed name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
