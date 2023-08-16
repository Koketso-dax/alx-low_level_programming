#include "main.h"
#include <stdio.h>
/**
 * times_table - prints out times table of 9 (multiples)
 */

void times_table(void)
{
	int x = 0;
	int y = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			printf("%d, ", x * y);

		}
		putchar('\n');
	}
}
