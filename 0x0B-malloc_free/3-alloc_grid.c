#include "main.h"
/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: On success, returns a pointer to the allocated 2D array.
 * On failure or if width/height is zero or negative, returns NULL.
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **grid;

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			free_grid(grid, i);
			return (NULL);
		}
	}
	return (grid);
}
