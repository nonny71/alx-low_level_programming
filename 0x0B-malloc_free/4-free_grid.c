#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 */
void free_grid(int **grid, int height);
{
	for i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}