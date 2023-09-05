#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate a string
 * @str: char
 *
 * Return: pointer
*/

char *_strdup(char *str)
{
	char *mychar;

	if (str == NULL)
	{
		return (NULL);
	}

	mychar = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (mychar == NULL)
	{
		return (NULL);
	}

	strcpy(mychar, str);
	return (mychar);
}
