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
	int m;
	int cent = atoi(argv[1]);
	int rest = 0;
	int change[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (m = 0; m < 5; m++)
		{
			if (cent >= change[m])
			{
				rest += cent / change[m];
				cent = cent % change[m];
				if (cent % change[m] == 0)
				{
					break;
				}

			}
		}
		printf("%d\n", rest);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
