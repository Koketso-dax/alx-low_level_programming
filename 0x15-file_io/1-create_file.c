#include "main.h"
/**
 * create_file - will create file with name *filename
 * @filename: name of the new file
 * @text_content: str to write
 * Return: 1 on Success. -1 on fail.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written, len = 0;

	if (!filename)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	bytes_written = write(file_descriptor, text_content, len);
	close(file_descriptor);
	if (bytes_written == -1 || bytes_written != len)
	{
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
