#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate mem
 * @b: unsigned int
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
