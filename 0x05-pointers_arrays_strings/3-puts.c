#include "main.h"
#include <stdio.h>
/**
 * _puts - print string
 * @str: parameter for puts
 * Return: 0
 */
void _puts(char *str)
{
	int r = 0;

	while (str[r] != '\0')
	{
		putchar(str[r]);
		r++;
	}
	putchar('\n');
}
