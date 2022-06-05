#include "main.h"

/**
 * creat_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_data, text, file_strings = 0;

	if (!filename)
		return (-1);

	file_data = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_data < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[file_strings])
			file_strings++;
		text = write(file_data, text_content, file_strings);
		if (text != file_strings)
			return (-1);
	}

	close(file_data);

	return (1);
}
