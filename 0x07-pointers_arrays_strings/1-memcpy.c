#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
