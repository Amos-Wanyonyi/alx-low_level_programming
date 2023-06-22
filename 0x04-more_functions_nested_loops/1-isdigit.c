#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: - The variable to be checked
 * Return: 1 if digit or 0 if else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
