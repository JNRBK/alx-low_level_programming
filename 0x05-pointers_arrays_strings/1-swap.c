#include "main.h"
/**
 * swap_int - swaps
 * @a: int
 * @b: int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
