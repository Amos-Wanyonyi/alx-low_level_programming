#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width side
 * @height: height side of array
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int a, b, c, d;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		s[a] = malloc(sizeof(int) * width);
		if (s[a] == NULL)
		{
			for (b = a; b >= 0; b++)
			{
				free(s[b]);
			}
			free(s);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			s[c][d] = 0;
		}
	}
	return (s);
}
