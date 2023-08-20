#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int a, b = 0;

	for (a = 1; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
