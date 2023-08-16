#include <stdio.h>
#include "main.h"
/**
 * print_times_table - implements overloaded function in main.h
 * @n: input number
 * description: prints out times table of input
 */

void print_times_table(int n)
{
	int x;
	int y = 0;
	int temp;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		while (x <= n)
			for (x = 0; x <= n; x++)
			{
				temp = x * n;
				if (x == n)
				{
				printf("%d", temp);
				}
				else
				{
					printf("%d, ", temp);
				}
			}
		putchar('\n');
	}
}
