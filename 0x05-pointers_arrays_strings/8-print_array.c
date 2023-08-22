#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: *a
 * @n: int
 * Return:
 */

void print_array(int *a, int n)
{
	int ar;

	for (ar = 0; ar < n - 1; ar++)
	{
		printf("%d, ", a[ar]);
	}
	if (ar == n - 1)
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
