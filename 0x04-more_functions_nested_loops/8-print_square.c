#include "main.h"
/**
 * print_square - will print out squares #
 * @size: size of square.
 */
void print_square(int size)
{
	int x;
	int y;

	if (size < 3)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
		return;
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
