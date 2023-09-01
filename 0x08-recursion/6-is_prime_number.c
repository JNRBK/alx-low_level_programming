#include "main.h"
/**
 * is_prime - scan for prime number
 * @n: int
 * @r: int
 * Return: function
*/
int is_prime(int n, int r)
{
	if (n == 2)
	{
		return (1);
	}
	else if (r == 1)
	{
		return (1);
	}
	else if (n % r == 0)
	{
		return (0);
	}

	return (is_prime(n, r - 1));
}
/**
 * is_prime_number - scan for prime function
 * @n: int
 * Return: function
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, n - 1));
}
