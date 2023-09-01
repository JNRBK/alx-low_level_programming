#include <stdio.h>
#include<stdlib.h>
/**
 * main - function to multiply two arguments
 * @argc: number of arguments
 * @argv: string contains argurments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int arg1, arg2, argresult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	argresult = arg1 * arg2;

	printf("%d\n", argresult);

		return (0);
}
