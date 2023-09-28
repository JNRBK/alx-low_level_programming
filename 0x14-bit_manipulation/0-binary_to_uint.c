#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: char pointer
 * Return: total
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			total = total * 2 + 1;
		}
		else if (b[i] == '0')
		{
			total *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (total);
}
