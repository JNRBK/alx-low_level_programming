#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: char
 * @s2: char
 * Return: mychar
*/

char *str_concat(char *s1, char *s2)
{
	char *mychar;
	unsigned int len, len1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1);
	len1 = strlen(s2);

	mychar = malloc((len + len1 + 1) * sizeof(char));

	if (mychar == NULL)
	{
		return (NULL);
	}
	strcpy(mychar, s1);
	strcat(mychar, s2);
	return (mychar);
}
