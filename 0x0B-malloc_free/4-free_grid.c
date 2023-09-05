#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid created by alloc_grid
 * @grid: pointer to the grid
 * @height: int type
 * Return: clean memory of the 2d array
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
