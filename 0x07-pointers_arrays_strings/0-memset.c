#include "main.h"
/**
 * _memset - function fills memory with constant byte
 * @s: char
 * @b: char
 * @n: int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		s[r] = b;
	}
	return (s);
}
