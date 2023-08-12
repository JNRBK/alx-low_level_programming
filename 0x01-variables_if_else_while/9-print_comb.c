#include <stdio.h>
/**
 * main - main is the function
 * print single digits with comma and space
 * Return: is 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
