#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - forms a two dimensional array of integers, init to 0
 * @width: number of columns in grid
 * @height: number of rows in grid
 *
 * Return: pointer to grid. NULL if width or height are 0, or failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	h = 0;
	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (!grid[h])
			return (NULL);

		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}

	return (grid);
}
