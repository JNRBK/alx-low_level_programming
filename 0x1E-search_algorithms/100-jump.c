#include "search_algos.h"
/**
 * jump_search - searching sorted arrays using jump search
 * @array: pointer to first element off array to search in
 * @size: number of elements
 * @value: value to search for
 * Return: 1st index where value is located
*/
int jump_search(int *array, size_t size, int value)
{

    size_t step = sqrt(size);
    size_t prev = 0;

    if (!array || !value)
        return (-1);
    
    while (array[fmin(step, size) - 1] < size)

}