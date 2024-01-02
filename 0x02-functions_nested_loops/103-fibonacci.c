#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	long int a = 0;
	unsigned long int previous = 0, current = 1,  sum_fib;

	while (current <= 4000000)
	{
		if (current % 2 == 0)
		{
			a += current;
		}
		sum_fib = previous + current;
		previous = current;
		current = sum_fib;
	}
	printf("%lu\n", a);
	return (0);
}
