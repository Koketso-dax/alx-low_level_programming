#include <stdio.h>

/**
 * print_array - prints array values for n number of elements
 * @a: input array.
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == (n - 1))
			printf("%d", a[x]);
		else
			printf("%d, ", a[x]);
	}
	putchar('\n');
}
