#include "main.h"
/**
 * flip_bits - return num of bits needs to flipped
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: num
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flbits = n ^ m, num = 0;

	for (; flbits > 0; num++)
		flbits &= (flbits - 1);
	return (num);
}
