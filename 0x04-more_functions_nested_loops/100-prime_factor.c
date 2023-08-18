#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int count = 2;
	long int maxFact;

	while (n != 0)
	{
		if (n % count != 0)
			count = count + 1;
		else
		{
			maxFact = n;
			n = n / count;
			if (n == 1)
			{
				printf("%ld", maxFact);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
