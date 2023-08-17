#include "main.h"
#include <stdio.h>

/**
 * print_numbers - will print numbers from 0 - 9 followed by a new line.
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('/n')
}
