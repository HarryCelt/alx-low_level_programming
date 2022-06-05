#include "main.h"

/**
 * read_textfile - reads a text file and prints to standard output
 * @filename: name of the file to be read
 * @letters: count of leeters to read and print
 * Return: letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_data, file_strings, text;
	char *buff;

	if (!filename)
		return (0);

	file_data = open(filename, O_RDONLY);
	if (file_data < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	file_strings = read(file_data, buff, letters);
	if (file_strings < 0)
	{
		free(buff);
		return (0);
	}
	buff[file_strings] = '\0';

	close(file_data);

	text = write(STDOUT_FILENO, buff, file_strings);
	if (text < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (text);
}
