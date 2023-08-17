#include "main.h"

/**
 * print_line - will print line based on size n (_)
 * @n: line length
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
