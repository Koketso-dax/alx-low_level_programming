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
	int coin_values[] = {25, 10, 5, 2, 1};
	int cents, i;
	int coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; cents > 0; i++)
	{
		coins += cents / coin_values[i];
		cents %= coin_values[i];
	}
	printf("%d\n", coins);
	return (0);
}
