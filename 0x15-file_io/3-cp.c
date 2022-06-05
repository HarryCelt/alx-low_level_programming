#include "main.h"

/**
 * main - copies the content of a file to another
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_read, file_write, reda, i, j;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_read = open(argv[1], O_RDONLY);
	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);;
	while((reda = read(file_read, buff, BUFSIZ)) > 0)
	{
		if (file_write < 0 || write(file_write, buff, reda) != r)
		{
			dprint(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_read);
			exit(99);
		}
	}
	if (reda < 0)
	{
		dprint(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(file_read);
	j = close(file_write);
	if (i < 0 || j < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file_data %d\n", file_read);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file_data %d\n", file_write);
		exit(100);
	}
	return (0);
}
