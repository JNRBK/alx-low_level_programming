#include "main.h"
#include<stdlib.h>
/**
 * array_range - function to create array
 * @min: int
 * @max: int
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int *ptr;
	int r, b;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;
	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < (b); r++, min++)
	{
		ptr[r] = min;
	}
	return (ptr);
}
