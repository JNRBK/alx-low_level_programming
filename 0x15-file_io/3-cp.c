#include "main.h"

void error(int file_to, int file_from)
{
    if (file_from == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from)
        exit(98);
    }
    if (file_to == NULL)
    {
        dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", file_to);
        exit(99);
    }
}
int main(int argc, char *argv[])
{
    const char *file_from = argv [1];
    const char *file_to = argv[2];
    char buffer [1024];
    int r, b, k;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
        exit(97);

    }

    a = open(file_from, O_RDONLY);

    b = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 00664);




}