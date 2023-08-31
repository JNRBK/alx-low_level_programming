#include "main.h"
/**
 * fun - check number to base
 * @n: int
 * @b: int
 * Return: fun
 */

int fun(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (fun(n + 1, b));
}

/**
 * _sqrt_recursion - sqrt of a number
 * @n: int
 * Return: fun
 */

int _sqrt_recursion(int n)
{
	return (fun(1, n));
}
