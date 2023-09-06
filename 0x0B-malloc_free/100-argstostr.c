#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all arguments printed with newline
 * @ac: int
 * @av: char
 * Return: pointer
*/

char *argstostr(int ac, char **av)
{
	char *point;
	int i, sum, length, x;

	sum = x = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	sum += strlen(av[i]) + 1;

	point = (char *)malloc(sizeof(char) * sum + 1);
	if (point == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);
		strcpy(point + x, av[i]);
		x += length;
		point[x] = '\n';
		x++;
	}
	point[x] = '\0';
	return (point);
}
