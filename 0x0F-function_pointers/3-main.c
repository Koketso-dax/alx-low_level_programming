#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - will use other mod to perform opp
 * @argc: num of args
 * @argv: [] of args
 * Return: Ans or Error status
 */
int main(int argc, char *argv[])
{
	int (*operand)(int, int);
	int a, b, c;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operand = get_op_func(argv[2]);
	if (operand == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}
	c = operand(a, b);
	printf("%d\n", c);
	return (0);
}
