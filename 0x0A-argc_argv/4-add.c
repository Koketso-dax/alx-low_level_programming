#include <stdio.h>
#include <stdlib.h>

/**
 * main - will add together positive numbers
 * @argc: num of args
 * @argv: [] of args
 * Return: 0 if success. 1 on failure
 */

int main(int argc, char *argv[])
{
	int x, y;
	unsigned int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum += atoi(argv[x]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
