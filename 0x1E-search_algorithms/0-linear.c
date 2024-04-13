#include "search_algos.h"
/**
 * linear_search - linear search algorithms
 * @array: array holding values to search in
 * @size: size of the array
 * @value: integer representing the target searched for
 * Return: value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array || size == 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
