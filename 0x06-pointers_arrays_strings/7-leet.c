#include "main.h"
/**
 * leet - function to encode string
 * @s: char
 * Return: s
 */

char *leet(char *s)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
