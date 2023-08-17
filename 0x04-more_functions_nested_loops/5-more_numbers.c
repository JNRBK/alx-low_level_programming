#include "main.h"
/**
 * more_numbers - more
 */

void more_numbers(void)
{
	int r;
	int f;

	for (r = 1; r <= 10; r++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f > 9)
			{
				_putchar(f / 10 + '0');
			}
				_putchar(f % 10 + '0');
		}
		_putchar('\n');
	}
}
