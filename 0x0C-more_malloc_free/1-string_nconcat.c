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
	unsigned int a1, a2;

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
	str = (char *)malloc(a1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	strncpy(str, s1, a1);
	strncat(str + a1, s2, n);

	str[a1 + n] = '\0';
	return (str);

}
