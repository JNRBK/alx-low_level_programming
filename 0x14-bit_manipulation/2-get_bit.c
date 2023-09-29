#include "main.h"
/**
 * get_bit - return value of a bit at a given index
 * @n: uint
 * @index: uint
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ind;

	if (index > 32)
	{
		return (-1);
	}
	ind = (n >> index) & 1;

	return (ind);
}
