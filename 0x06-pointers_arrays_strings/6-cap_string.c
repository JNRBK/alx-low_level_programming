#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * cap_string - function that capitalizes the letters of a string
 * @a: char
 * Return: value
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (i == 0 || a[i - 1] == ' ' || a[i - 1] == '\t' ||
				a[i - 1] == '.' || a[i - 1] == '\n')
		{
			a[i] = toupper(a[i]);
		}
		i++;
	}
	return (a);
}
