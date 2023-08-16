#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10  - printing
 *
 * Description: print_alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char x;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}
		_putchar('\n');
	}
}
