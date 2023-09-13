#include "function_pointers.h"
/**
 * int_index - int index of array
 * @array: int
 * @size: int
 * @cmp: int
 * Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]) != 0)
		{
			return (r);
		}
	}
	return (-1);
}
