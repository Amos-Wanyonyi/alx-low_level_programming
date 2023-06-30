#include "main.h"
/**
* print_number - Prints an integer
* @n: The integer to be printed
* Return: no return
*/
void print_number(int n)
{
unsigned int number;

number = n;

if (n < 0)
{
_putchar('-');
number = -n;
}
if (number / 10 != 0)
{
print_number(number / 10);
}
_putchar((number % 10) + '0');
}

