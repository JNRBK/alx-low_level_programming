#include "main.h"
/**
 * _strlen_recursion - get length of string
 * @s: char
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
