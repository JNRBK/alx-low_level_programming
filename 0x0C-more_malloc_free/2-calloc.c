#include "main.h"
#include <stdlib.h>
/**
 * _calloc - main function
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
