#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function
 * @str: char
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int k = strlen(str);

	for (i = 0; i < k; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');

}
