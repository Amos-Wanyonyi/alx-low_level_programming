#include "main.h"
/**
 * rev_string - reverses a string
 * @s: - pointer pointing to the string
 * Returm: 0
 */
void rev_string(char *s)
{
	int length;
	int z;
	int half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;
	z = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}

