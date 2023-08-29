#include "main.h"
#include <string.h>
/**
 * _strpbrk - function to locate the first occurance in string
 * @s: char
 * @accept: char
 * Return: raf
 */

char *_strpbrk(char *s, char *accept)
{
	char *raf;

	raf = strpbrk(s, accept);
	return (raf);
}
