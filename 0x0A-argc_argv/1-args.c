#include <stdio.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
		return (0);
}
