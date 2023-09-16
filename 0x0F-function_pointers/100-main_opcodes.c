#include <stdio.h>
#include <stdlib.h>
/**
 * main - will wite it's own opcodes
 * @argc: num of cmd args
 * @argv: [] of cmd args
 * Return: 0 on success. 1 or 2 on fail.
 */
int main(int argc, char *argv[])
{
	int x, bytes;
	unsigned char *ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}

	for (x = 0; x < bytes; x++)
	{
		printf("%02hhx", ptr[x]);
		if (x < (bytes - 1))
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
