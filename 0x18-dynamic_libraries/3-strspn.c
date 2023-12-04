#include "main.h"
#include <string.h>
/**
 * _strspn - function to get length of a prefix substring
 * @s: char
 * @accept: char
 * Return: intial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;

	while (s[r] != '\0')
	{
		if (strchr(accept, s[r]) == NULL)
		{
			return (r);
		}
		r++;
	}
	return (r);
}
