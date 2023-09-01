#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - function
 * @s: char
 * Return: 0
 */

int _atoi(char *s)
{
	int r = 1;
	unsigned int z = 0;

	do {
		if (*s == '-')
		{
			r *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			z = (z * 10) + (*s - '0');
		}
		else if (z > 0)
			break;
	} while (*s++);
	return (r * z);
}
