#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print integers in an array
 * @separator: const char
 * @n: unsigned int
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a;

	va_start(num, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(num, int));
		if (a < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");
}
