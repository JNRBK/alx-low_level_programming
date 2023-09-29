#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to ULI
 * @index: uint
 * Return: 1 if successful
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
