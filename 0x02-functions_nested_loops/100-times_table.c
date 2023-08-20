#include "main.h"
void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');

		for (b = 0; b <= n; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

			if (c < n)
				_putchar(' ');
			else if (c > 100)
				_putchar(c / 10);
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
	
