#include "main.h"
/**
 * _puts - print string
 * @str: parameter for puts
 * Return: always 0
 */
void _puts(char *str)
{
	int r = 0;

	while (str[r] != '\0')
	{
		_putchar(str[r]);
		r++;
	}
	_putchar('\n');
}
