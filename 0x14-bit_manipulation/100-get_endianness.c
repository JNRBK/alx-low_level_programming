#include "main.h"

/**
 * get_endianness - checks endiansss
 * Return: c
 */
int get_endianness(void)
{
	unsigned int r = 1;
	char *c = (char *) &r;

	return (*c);
}
