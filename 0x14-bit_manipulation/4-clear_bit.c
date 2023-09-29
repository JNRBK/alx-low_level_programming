#include "main.h"
/**
 * clear_bit - sets the value of abit to 0
 * @n: pointer to ULI
 * @index: unsigned int
 * Return: 1 if success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
}
