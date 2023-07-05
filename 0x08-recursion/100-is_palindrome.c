#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if it's palindrome
 * @s: the string
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
		return (1);

	if (s[0] == s[len - 1])
	{
		s[len - 1] = '\0';
		int result = is_palindrome(s + 1);

		s[len - 1] = s[0];

		return (result);
	}
	return (0);
}
