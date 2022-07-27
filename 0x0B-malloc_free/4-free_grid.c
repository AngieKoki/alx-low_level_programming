#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2D grid from previos alloc_grid function
 * @grid: grid array
 * @height: input height
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
