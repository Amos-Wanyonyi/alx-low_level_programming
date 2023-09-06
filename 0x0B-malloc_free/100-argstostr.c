#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the argument counter
 * @av: the argument vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, a = 0, b = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (a < ac)
	{
		while (av[a][b])
		{
			ch++;
			b++;
		}
		b = 0;
		a++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			s[c] = av[a][b];
			c++;
			b++;
		}
		s[c] = '\n';
		c++;
		b = 0;
		a++;
	}
	c++;
	s[c] = '\0';
	return (s);
}
