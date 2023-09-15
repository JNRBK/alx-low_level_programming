#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - main function
 * @argc: count
 * @argv: arg v
 * Return: 0
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *calc;
	int num1, num2;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	calc = argv[2];
	num2 = atoi(argv[3]);
	if (calc[1] != '\0' || get_op_func(calc) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*calc == '/' && num2 == 0)
	|| (*calc == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(calc)(num1, num2));
	return (0);
}
