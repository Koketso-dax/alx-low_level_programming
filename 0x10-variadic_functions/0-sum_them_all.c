#include <stdarg.h>
#include "variadic_function.h"
/**
 * sum_them_all - will sum up variable number of args
 * @n: number of args
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	sum = 0;
	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
