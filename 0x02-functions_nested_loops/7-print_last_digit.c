#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints last digit
 *
 * @n: parameter to print last digit
 *
 * Return: i
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = -1 * (n % 10);
	else
		i = n % 10;
	{
		_putchar(i + '0');
	}
	return (i);
}
