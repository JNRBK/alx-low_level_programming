#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function creates array of chars
 * @size: unsigned size of int
 * @c: char
 * Return: NULL or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *mychar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	mychar = (char *)malloc(size * sizeof(char));

	if (mychar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		mychar[i] = c;
	}
	return (mychar);
}
