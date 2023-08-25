#include "main.h"
/**
 * print_number - prints integer
 * @n: int
 * Return: 0
 */

void print_number(int n)
{
	unsigned int l = n;

	if (n < 0)
	{
		l = -n;
		_putchar('-');
	}
	if (l / 10)
	{
		print_number(l / 10);
	}

	_putchar(l % 10 + '0');
}
