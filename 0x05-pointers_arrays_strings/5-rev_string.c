#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function
 * @s: char
 * Return: 0
 */

void rev_string(char *s)
{
	int k = strlen(s);
	int i;
	char *a, *e, temp;

	a = s;
	e = s;

	for (i = 0; i < k - 1; i++)
		e++;
	for (i = 0; i < k / 2; i++)
	{
		temp = *e;
		*e = *a;
		*a = temp;
		a++;
		e--;
	}
}
