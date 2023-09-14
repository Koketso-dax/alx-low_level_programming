#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - will return sum of a and b
 * @a: int input
 * @b: int input
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - will return a - b
 * @a: int input
 * @b: int input
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - will return product of a and b
 * @a: int input
 * @b: int input
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - will return quotioent of a and b
 * @a: int input
 * @b: int input
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}
/**
 * op_mod - will return modulus of a and b.
 * @a: int input
 * @b: int input
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
