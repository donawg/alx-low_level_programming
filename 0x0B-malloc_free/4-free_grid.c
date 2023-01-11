#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees up memory taken up by grid
 * @grid: grid to be freed up
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
