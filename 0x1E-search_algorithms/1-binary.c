#include "search_algos.h"
/**
 * binary_search - function used to binary search
 * @array: array holding values to be searched
 * @size: size of array
 * @value: target element to look for
 * Return: value or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, mid, last = size - 1, x;

	if (!array || size == 0)
		return (-1);

	while (first <= last)
	{
		mid = (first + last) / 2;

		printf("Searching in array: ");
		for (x = first; x <= last; x++)
		{
			printf("%d", array[x]);
			if (x <  last)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return (-1);
}
