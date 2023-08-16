#include "main.h"

/**
 * times_table - prints out times table of 9 (multiples)
 */

void times_table(void)
{
	int x = 0;
	int y = 0;
	int tmp = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			tmp = x * y;
			_putchar(44);
			_putchar(32);
			if (tmp <= 9)
			{
				_putchar(32);
				_putchar(tmp + 48);

			}
			else
			{
				_putchar((tmp / 10) + 48);
				_putchar((tmp % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
