#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free the 2D array created by alloc_grid
 *
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 *
 * Return: Void.
 *
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
