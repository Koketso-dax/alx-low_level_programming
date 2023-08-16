#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - will count to 98.
 * @n: number to start from
 * returns: 0 on success.
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	putchar('\n');
}
