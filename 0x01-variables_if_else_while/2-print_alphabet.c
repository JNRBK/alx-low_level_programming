#include <stdio.h>
/**
 * main - main function
 * print alphabet in lower case
 * Return: to zero
 */

int main(void)
{
	char ch = 'x';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
