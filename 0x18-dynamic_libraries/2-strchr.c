#include "main.h"
#include <string.h>
/**
 * _strchr - locate a character in a string
 * @s: char
 * @c: char
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
