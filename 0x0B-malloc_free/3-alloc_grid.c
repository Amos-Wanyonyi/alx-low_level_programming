#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2D array of intergers
 * @height: interger type
 * @width: integer type
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);
}

