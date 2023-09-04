#include <stdio.h>
#include <stdlib.h>
/**
 * main - calc change
 * @argc: number of args (should be 1)
 * @argv: [] of cmd args
 * Return: 0 on success. 1 on failure
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = 0;
	int x;
	int dim[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (x = 0; x < 5; x++)
	{
		while (cents >= dim[x])
		{
			cents -= dim[x];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
