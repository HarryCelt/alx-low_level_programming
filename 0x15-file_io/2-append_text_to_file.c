#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: file to append
 * @text_content: content to append
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_data;
	int text, str = 0;
	
	if (!filename)
		return (-1);

	file_data = open(filename, O_WRONLY | O_APPEND);
	if (file_data < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[str])
			str++;
		text = write(file_data, text_content, str);
		if (text != str)
			return (-1);
	}

	close(file_data);

	return (1);
}
