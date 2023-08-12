#include <stdio.h>
/**
 * main - its the main function
 * reverse the alphabet
 * Return: always zero
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar ('\n');
	return (0);
}
