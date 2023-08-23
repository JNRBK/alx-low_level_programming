#include "main.h"
/**
 * string_toupper - function that convert lower to upper
 * @a: char
 * Return: char
 */

char *string_toupper(char *a)
{
	int up;

	for (up = 0; a[up] != '\0'; up++)
	{
		if (a[up] >= 'a' && a[up] <= 'z')
			a[up] -= 32;
	}
	return (a);
}
