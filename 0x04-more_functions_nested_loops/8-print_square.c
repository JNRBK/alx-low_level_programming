#include "main.h"
/**
 * print_square - prints
 * @size: int
 * Return: 0
 */

void print_square(int size)
{
	int n, x;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
