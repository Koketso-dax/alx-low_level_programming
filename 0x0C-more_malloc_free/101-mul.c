#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isdigits - will determine if number if a digit
 * @str: input num
 * Return: 0 if true. 1 if false
 */
int _isdigits(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - will mul 2 int
 * @arc: num of args
 * @argv: [] of args
 * Return: 0 on success. 98 on fail
 */
int main(int argc, char *argv[])
{
	int x, y;
	long long res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!_isdigits(argv[1]) || !_isdigits(argv[2]))
	{
		printf("Error\n");
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (x < 0 || y < 0)
	{
		printf("Error\n");
		return (98);
	}
	res = (long long)x * y;
	printf("%lld\n", res);
	return (0);
}
