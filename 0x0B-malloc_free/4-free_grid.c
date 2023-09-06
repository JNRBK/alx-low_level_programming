#include "main.h"
#include <stdlib.h>
/**
 * free_grid - afunction to free 2d array
 * @grid: 2d array
 * @height: height of array
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; ++r)
	{
		free(grid[r]);
	}
	free(grid);
}
