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

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}

	unsigned char *ptr = (unsigned char *)main;
	for (x = 0; x < bytes; x++)
	{
		printf("%02x", ptr[x]);
	}
	putchar('\n');
	return (0);
}
