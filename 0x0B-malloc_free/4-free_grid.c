#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @grid: long grid
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
