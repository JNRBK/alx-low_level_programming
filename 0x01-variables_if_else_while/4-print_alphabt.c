#include <stdio.h>
/**
 * main - main is the function
 * print alphabet with out 'e' & 'q'
 * Return: always zero
 */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	putchar('\n');
	return (0);
}
