#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a strings
 * @n: the number of strings passed to a function
 * @separator: is the delimitor
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("%p", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
