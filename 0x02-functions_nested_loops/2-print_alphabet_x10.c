#include "main.h"

/**
 * print_alphabet_x10 - entry point function prototyped in main.h
 * description: will print out the alphabet (a-z) x10.
 */

void print_alphabet_x10(void)
{
	int x = 0;

	while (x <= 9)
	{
		char _abc = 'a';

		while (_abc <= 'z')
		{
			_putchar (_abc);
			_abc++;
		}
	x++;
	}
_putchar ('\n');
}
