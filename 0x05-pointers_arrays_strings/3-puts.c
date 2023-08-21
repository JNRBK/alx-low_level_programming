#include "main.h"
/**
 * _puts - print string
 * @str: char
 * Return:
 */
void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
