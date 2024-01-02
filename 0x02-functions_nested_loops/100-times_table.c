#include "main.h"
/**
 * print_times_table - function that calculate and times n
 * @n: int representing the number of multiplication
 * Return: none , void
*/
void print_times_table(int n)
{
	int row, column, times;
	/*requirement: if n is greater than 15 or less than 0*/
	/*function should print nothing*/
	if (!(n > 15 || n < 0))
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (column = 1; column <= n; column++)
			{

				_putchar(',');
				_putchar(' ');
				times = row * column;
			/*handeling 100s place*/
				if (times >= 100)
					_putchar((times / 100) + '0');
				else
					_putchar(' ');
			/*handeling 10s place*/
				if (times >= 10)
					_putchar(((times / 10) % 10) + '0');
				else
					_putchar(' ');
			/*handeling 1s place*/
				_putchar(times % 10 + '0');

			}
			_putchar('\n');
		}
	}
}
