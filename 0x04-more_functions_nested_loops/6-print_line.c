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
		if (n >= 0)
		{
			_putchar('_');
		}
	}
}
