#include "main.h"
/**
 * _sqrt_recursion - will calc sqrt using recursion
 * @n: input number
 * Return: sqrt of @n.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - will return base case
 * @n: int parameter
 * @x: int parameter
 * Return: Square root
 */
int _sqrt(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((x * x) > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_sqrt(n, x + 1));
}
