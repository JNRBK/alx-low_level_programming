#include "main.h"
#include <string.h>
/**
 * create_file - functions that creates file
 * @filename: pointer to const char
 * @text_content: pointer to char
 * Return: 1 for success , -1 for fail
*/
int create_file(const char *filename, char *text_content)
{
	int f, a, len;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		a = write(f, text_content, len);

		if (a == -1)
			return (-1);
	}

	close(f);

	return (1);
}
