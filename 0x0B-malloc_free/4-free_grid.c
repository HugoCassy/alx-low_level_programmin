#include "main.h"
/**
 * free_grid - Frees the memory of a 2D grid.
 * @grid: The grid to free.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}

	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
