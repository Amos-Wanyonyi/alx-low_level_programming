#include "main.h"
/**
*longitud - function that returns the length
*@s: string
*Return: length of a string
*/
int longitud(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		return (longitud(s + 1) + l);
	}
	return (l);
}
/**
 *comparar - compares a string to check for palindrome
 *@i: index for start of string
 *@l: index for end of string
 *@s: string
 *Return: 1 if palindrome, 0 if not
 */
int comparar(int i, int l, char *s)
{
	if (i >= l)
		return (1);
	else if (s[i] == s[l])
		return (comparar(i + 1, l - 1, s));
	else
		return (0);
}
/**
 *is_palindrome - checks if a string is palindrome
 *@s: string
 *Return: 1 if success, else 0
 */
int is_palindrome(char *s)
{
	int l = longitud(s);
	int i = 0;

	return (comparar(i, l - 1, s));
}
