#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - function
 * @s: char
 * Return: 0
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
