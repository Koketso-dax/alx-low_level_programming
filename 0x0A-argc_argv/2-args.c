#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: num of args
 * @argv: [ ] of cmd args
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
