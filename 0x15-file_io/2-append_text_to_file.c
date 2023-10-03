#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Add text to EOF
 * @filename: name of file will append to
 * @text_content: text inside file
 * Return: 1 for success -1 for fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f, a, len;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_APPEND);
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
