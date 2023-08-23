#include "main.h"
#include <string.h>
/**
 * reverse_array - function that reverses array
 * @a: int
 * @n: int
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
