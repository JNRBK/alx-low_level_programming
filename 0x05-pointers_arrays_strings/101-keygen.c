#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	srand(time(NULL));
	int pass[50];
	int i;

	for (i = 0; i < 50; i++)
	{
		pass[i] = rand() % 10;

	}
	return (0);
}
