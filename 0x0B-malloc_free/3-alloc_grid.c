#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - function to allocate grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **point;
	int r, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	point = (int **)malloc(sizeof(int *) * height);
	if (point == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < height; ++r)
	{
		point[r] = (int *)malloc(sizeof(int) * width);
		if (point[r] == NULL)
		{
		for (j = 0; j < r; ++j)
		{
			free(point[j]);
		}
		free(point);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			point[r][j] = 0;
		}
	}
	return (point);
}
