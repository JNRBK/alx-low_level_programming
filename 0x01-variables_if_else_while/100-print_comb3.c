#include <stdio.h>
/**
 * main - main is the function
 * print every possible combinations of two digits
 * Return: return is zero
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x < 8 || y < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
