#include "main.h"
/**
 * print_number - function to print number
 * @n: int
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
