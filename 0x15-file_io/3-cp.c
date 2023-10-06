#include "main.h"
#define BUFFER_SIZE 1024

/**
 * _close - close opened files
 * @fd: file descriptor
 * @argv: argument victor passed in array
 * Return: void
*/
void _close(ssize_t fd, char *argv)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: argument coun
 * @argv: argument victor
 * Return: 0
*/
int main(int argc, char *argv[])
{
	ssize_t r, w, fd1, fd2;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(fd1, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd2, buffer, r);
		if (w <= 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_close(fd1, argv[1]);
	_close(fd2, argv[2]);
	return (0);
}
