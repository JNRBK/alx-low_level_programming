#include "main.h"
/**
 * print_line - prints
 * @n: int
 * Return: 0
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
