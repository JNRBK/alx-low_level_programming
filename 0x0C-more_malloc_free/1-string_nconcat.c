#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: ptr
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a1, a2, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a1 = strlen(s1);
	a2 = strlen(s2);

	if (n >= a2)
	{
		n = a2;
	}
	str = malloc(a1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	str[x] = s1[x];
	for (y = 0; y < n; y++, x++)
	str[x] = s2[y];

	str[x] = '\0';
	return (str);

}
