#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: always zero
 */
int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;

	if (number % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", number 10);
	}
	else if (number % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", number 10);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", number 10);
	}
	return (0);
}
