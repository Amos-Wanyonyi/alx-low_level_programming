#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the 2D array created in alloc_grid.c
 * @grid: the memory grid
 * @height: int type
 * Return: the freed grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
