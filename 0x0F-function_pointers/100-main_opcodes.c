#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: count
 * @argv: ptr
 * Return: void
*/

int main(int argc, char *argv[])
{
	int i, numbyt;
	unsigned char p;
	int (*s)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numbyt = atoi(argv[1]);

	if (numbyt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < numbyt; i++)
	{
		p = *(unsigned char *)s;
		printf("%.2x", p);
		if (i == numbyt - 1)
		continue;
		printf(" ");
		s++;
	}
	printf("\n");
	return (0);
}
