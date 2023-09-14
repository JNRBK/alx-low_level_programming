#include "function_pointers.h"

int main(argc, char *argv[])
{
	char *calc;
	int num1, num2;

	calc = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (calc != "+"
	|| calc != "-"
	|| calc != "*"
	|| calc != "/"
	|| calc != "%")
		{
			printf("Error\n");
			exit(99);
		}
	if (calc == "/" && num2 == 0
	|| calc == "%" && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d", get_op_func(calc)(num1, num2));
	return (0);
}
