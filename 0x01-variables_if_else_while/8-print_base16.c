#include <stdio.h>
/**
 * main - is the main function
 * print hexadecimal from base 16
 * Return: always zero
 */

int main(void)
{
	int x;

	for (x = 0; x < 16; ++x)
		if (x < 10)
		{
			putchar(x + '0');
		}
		else
		{
			putchar(x - 10 + 'a');
		}
	putchar('\n');
	return (0);
}
