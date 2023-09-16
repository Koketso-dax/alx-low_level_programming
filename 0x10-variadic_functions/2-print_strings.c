#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - will print variable num of str
 * @separator: char separator
 * @n: number of str args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int x = 0;
	va_list args;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}
