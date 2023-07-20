#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - returns the sum of all its paramters
* @n: the number of parameters
* Return: sum of the parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list list;
int sum;
unsigned int i;
int num;

if (n)
{
va_start(list, n);
for (i = 0; i < n; i++)
{
num = va_arg(list, int);
sum += num;
}
va_end(list);
}
return (sum);
}
