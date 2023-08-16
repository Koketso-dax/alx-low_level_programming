#include "main.h"
/**
 * print_times_table - implements overloaded function in main.h
 * @n: input number
 * description: prints out times table of input
 */

void print_times_table(int n)
{
	int a, b;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int c = a * b;

			if (b == 0)
				putchar('0' + c);
			else if (c < 10)
				putchar(' '), putchar(''), putchar('0' + c);
			else if (c < 100)
				putchar(' '), putchar('0' + c / 10), putchar('0' + c % 10);
			else
				putchar('0' + c / 100), putchar('0' + (c / 10) % 10), putchar('0' + c % 10);
			if (b < n)
				putchar(','), putchar(' ');
		}
		putchar('\n');
	}
}
