#include "main.h"
/**
 * print_most_numbers - will print numbers from (0-9) except 2 & 4.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x == 50 || x == 52)
		{
			continue;
		}
		else
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
