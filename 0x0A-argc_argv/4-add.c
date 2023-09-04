#include <stdio.h>
#include <stdlib.h>

/**
 * main - will add together positive numbers
 * @argc: num of args
 * @argv: [] of args
 * Return: 0 if success. 1 on failure
 */

int main(int argc, char **argv)
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
				sum += atoi(argv[x]);
		}
	}
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
		printf("%d\n", sum);
	return (0);
}
