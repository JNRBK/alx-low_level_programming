#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints only strings within array
 * @separator: const char
 * @n: unsigned int
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *chr;

	va_list ptr;

	va_start(ptr, n);
	for (a = 0; a < n; a++)
	{
		chr = va_arg(ptr, char *);
		if (chr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", chr);
		}
		if (a < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
