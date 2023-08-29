#include "main.h"
#include <stdio.h>
/**
 * _memset - function the fills memory
 * @s: char
 * @b: char
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
		s[r] = b;
	return (s);
}
