#include <stdio.h>
#include <stdlib.h>
/**
 * main - counting change
 * @argc: number of arguments
 * @argv: string containing arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int cent, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	change = 0;

	change += cent / 25;
	cent %= 25;

	change += cent / 10;
	cent %= 10;

	change += cent / 5;
	cent %= 5;

	change += cent / 2;
	cent %= 2;

	change += cent;

	printf("%d\n", change);
	return (0);
}
