#include <stdio.h>

/**
 * print_times_table - implements overloaded function in main.h
 * @n: input number
 * description: prints out times table of input
 */

void print_times_table(int n)
{
	int x;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			if (x == n)
			{
				printf("%d", x * n);
			}
			else
			{
				printf("%d, ", x * n);
			}
		}
		putchar('\n');
	}
}
