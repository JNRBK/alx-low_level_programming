#include "main.h"
/**
 * _memset - function to fill memory with constant byte
 * @s: char
 * @b: char
 * @n: int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
