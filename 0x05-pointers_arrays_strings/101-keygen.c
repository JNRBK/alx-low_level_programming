#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatepassword(int n)
{
	int i, randomizer = 0;
	srand(time(NULL));
	char password[n];

	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";

	randomizer = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = letters[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTERS[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
int main()
{
	return (0);
}
