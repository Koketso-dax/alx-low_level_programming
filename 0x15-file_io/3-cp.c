#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - copies file contents
 * @argc: number of args
 * @argv: [] of args
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int file1, file2;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Ca't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file1, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file2, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file1 < 0))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file1);
		exit(100);
	}
	if (close(file2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2);
		exit(100);
	}
	return (0);
}
