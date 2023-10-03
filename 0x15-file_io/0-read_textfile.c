#include "main.h"
/**
 * read_textfile - reads a text from a file
 * @filename: pointer to file name
 * @letters: size_t
 * Return: try
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t try1, try2;
	int try;

	if (filename == NULL)
	{
		return (0);
	}
	try = open(filename, O_RDONLY);
	if (try == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}
	try1 = read(try, buffer, letters);
	try2 = write(STDOUT_FILENO, buffer, try1);

	close(try);
	free(buffer);
	return (try2);
}
