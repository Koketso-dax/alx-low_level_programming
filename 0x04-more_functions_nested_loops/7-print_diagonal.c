#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ is drawn on screen.
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (x == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
