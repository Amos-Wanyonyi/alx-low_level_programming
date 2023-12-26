#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - prints the name
 * @name: name to print
 * @f: pointer to the name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
