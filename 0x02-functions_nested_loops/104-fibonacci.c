#include <stdio.h>
/**
 * main - access point
 * description: prints out first 98 fibonacci numbers
 * Return: must be 0.
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 0;
	int x = 0;

	printf("%lu, %lu, ", a, b);
	while (x < 95)
	{
		c = a + b;
		printf("%lu", c);
		if (x < 94)
		{
			printf(", ");
		}
		a = b;
		b = c;
		x++;
	}
	putchar('\n');
	return (0);
}
