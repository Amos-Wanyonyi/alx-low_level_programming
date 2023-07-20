#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers
* @n: number of intergers passed to a function
* @separator: the delimeter
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
int num;

va_start(list, n);
for (i = 0; i < n; i++)
{
num = va_arg(list, int);
printf("%d", num);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
va_end(list);
}
printf("\n");
}
