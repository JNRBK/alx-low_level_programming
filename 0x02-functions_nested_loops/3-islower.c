#include "main.h"
/**
 * _islower - lowercase character
 *
 * @c: int c
 *
 * Return: return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
