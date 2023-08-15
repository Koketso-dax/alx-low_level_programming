#include "main.h"

/**
 * main - entry point function for prototype defined in main.h.
 * description: prints out alphabet from a-z (lowercase)
 * Return: must be 0.
 */

void print_alphabet(void)
{
	char _abc = 'a';

	while (_abc <= 'z')
	{
	_putchar (_abc);
	_abc++;
	}
	_putchar ('\n');
	return (0);
}
