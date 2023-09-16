#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - will print numbers with a separator
 * @separator: char separator
 * @n: number count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));
		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
