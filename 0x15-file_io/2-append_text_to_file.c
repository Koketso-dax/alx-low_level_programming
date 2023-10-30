#include "main.h"
/**
 * append_text_to_file - will append text to EOF
 * @filename: name of file to append to
 * @text_content: text to append
 * Return: 1 on success. -1 on Fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	size_t len;
	ssize_t bytes_written;

	if (!filename)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_APPEND | O_RDWR);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(file_descriptor, text_content, len);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	if (close(file_descriptor) == -1)
	{
		return (-1);
	}
	return (1);
}
