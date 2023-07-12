#include "main.h"
/**
 * free_grid - Frees the memory of a 2D array.
 * @grid: The grid to free.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

/**
 * alloc_grid - Creates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: On success, returns a pointer to the created 2D array.
 * On failure or if width/height is 0 or negative, returns NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

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

/**
 * initialize_grid - Initializes a 2D array of integers with 0.
 * @grid: The grid to initialize.
 * @width: The width of the grid.
 * @height: The height of the grid.
 */
void initialize_grid(int **grid, int width, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
}
