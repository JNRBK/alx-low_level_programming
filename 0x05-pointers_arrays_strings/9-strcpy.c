#include "main.h"
/**
 * _strcpy - copies
 * @dest: a buffer
 * @src: src string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
