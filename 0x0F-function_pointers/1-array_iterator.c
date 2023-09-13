#include "function_pointers.h"
/**
 * array_iterator - function that iterates array
 * @array: int
 * @size: size of array
 * @action: void
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int r;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (r = 0; r < size; r++)
	{
		(*action)(array[r]);
	}
}
