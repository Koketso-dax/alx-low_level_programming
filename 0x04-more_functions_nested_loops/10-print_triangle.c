#include "main.h"

/**
 * print_triangle - will print triangle of specified size
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = x; y < size; y++)
		{
			_putchar(' ');
		}
		for (z = 1; z <= x; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
