#include "main.h"
#include <string.h>
/**
 * _strstr - function finds the first occurence in substring
 * @haystack: char
 * @needle: char
 * Return: rbk
 */

char *_strstr(char *haystack, char *needle)
{
	char *rbk;

	rbk = strstr(haystack, needle);

	return (rbk);
}
