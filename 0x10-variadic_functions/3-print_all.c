#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all input
 * @format: list of types
 * Return:
*/
void print_all(const char * const format, ...)
{
	va_list prnt;
	int i = 0;
	char *s;
	char *zft = "";

	va_start(prnt, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", zft, va_arg(prnt, int));
			break;
			case 'i':
			printf("%s%d", zft, va_arg(prnt, int));
			break;
			case 'f':
			printf("%s%f", zft, va_arg(prnt, double));
			break;
			case 's':
			s = va_arg(prnt, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", zft, s);
			break;
			default:
			i++;
			continue;
		}
		zft = ", ";
		i++;
	}
	va_end(prnt);
	printf("\n");
}
