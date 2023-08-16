#include <stdio.h>
#include "main.h"
/**
 * print_times_table - implements overloaded function in main.h
 * @n: input number
 * description: prints out times table of input
 */

void print_times_table(int n)
{
	int x, y;
	int tmp = 0;

	if (n < 0 || n > 15)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			tmp = x * y;

			if (y == 0)
			{
				printf("%d", tmp);
			}
			else if (tmp < 10)
			{
				printf(" %d", tmp);
			}
			else if (tmp < 100)
			{
				printf(" %d%d", tmp / 10, tmp % 10);
			}
			else
				printf(" %d%d%d", tmp / 100, (tmp / 10) % 10, tmp % 10);
			if (y < n)
				printf(", ");
		}
		printf("\n");
	}
}
