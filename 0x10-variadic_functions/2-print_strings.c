#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a strings
 * @n: the number of strings passed to a function
 * @separator: is the delimitor
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list list1;

	va_start(list1, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list1, char*);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list1);
}
