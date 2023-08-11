#include <stdio.h>
/**
 * main - is the main function
 * print single digits from base 10 using putchar
 * Return: will return zero
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}

	putchar('\n');
	return (0);

}
