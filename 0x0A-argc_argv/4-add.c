#include<stdio.h>
#include <stdlib.h>
/**
 * main - function to add positive numbers
 * @argc: number of arguments
 * @argv: string containing arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int r, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (r = 1; r < argc; r++)
		{
			char *x = argv[r];
			int n;

			for (n = 0; x[n] != '\0'; n++)
			{
				if (x[n] < '0' || x[n] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(x);
		}
		printf("%d\n", sum);
	}

	return (0);
}
