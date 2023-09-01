#include "main.h"
#include <string.h>
/**
 * palindrome - check if palindrome or not
 * @s: char
 * @l: int
 * @r: int
 * Return: 0
*/
int palindrome(char *s, int l, int r)
{
	if (l >= r)
	{
	return (1);
	}
	if (s[l] == s[r])
	return (palindrome(s, l + 1, r - 1));
	else
	return (0);
}
/**
 * is_palindrome - check if is palindrome
 * @s: char
 * Return: palidrome
*/
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0 || len == 1)
	{
	return (1);
	}
	return (palindrome(s, 0, len - 1));
}
