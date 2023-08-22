#include "main.h"
#include <stdio.h>
/**
 * puts_half - function
 * @str: input
 * return: half
 */

void puts_half(char *str)
{
	int a, r, half;

	half = 0;

	for (a = 0; str[a] != '\0'; a++)
		half++;
	r = (half / 2);

	if ((half % 2) == 1)
		r = ((half + 1) / 2);

	for (a = r; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}


