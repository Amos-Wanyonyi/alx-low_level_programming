#include "main.h"
/**
 * _strspn - Gets length of a prefix substring
 * @s: The input string
 * @accept: The string with accepted bytes
 * Return: Number of bytes in s which has bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int is_accept;

	for (i = 0; s[i] != '\0'; i++)
	{
		is_accept = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			is_accept = 1;
			break;
		}
	}
	if (is_accept == 0)
	{
		break;
	}
	count++;
	}
	return (count);
}
