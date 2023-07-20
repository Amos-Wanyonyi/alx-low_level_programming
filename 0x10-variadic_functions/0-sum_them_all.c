#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - returns the sum of all its paramters
* @n: the number of parameters
* Return: sum of the parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum;
unsignedint i;
int num;

va_start(args, n);
if (n == 0)
{
va_end(args);
return (0);
}
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
sum += num;
}
va_end(args);
return (sum);
}
