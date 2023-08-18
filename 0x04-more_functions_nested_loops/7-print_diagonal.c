#include "main.h"
/**
 * print_line - prints
 * @n: int
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					_putchar('\\');
				else if (y < x)
				       _putchar(' ');
			}
			_putchar('\n');
		}
	}
}
