#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a strings
 * @n: the number of strings passed to a function
 * @separator: is the delimitor
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list1;
	unsigned int i;
	char *clone;

	va_start(list1, n);

	for (i = 0; i < n; i++)
	{
		clone = va_arg(list1, char*);
		if (clone != NULL)
			printf("%s", clone);
		else
			printf("%p", clone);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list1);
}
