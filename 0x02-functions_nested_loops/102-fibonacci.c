#include <stdio.h>
/**
 * main - access point
 * description: prints out first 50 fibonacci numbers
 * Return: must be 0.
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int x = 0;

	printf("%d, %d, ", a, b);
	while (x <= 48)
	{
		c = a + b;
		printf("%d", c);
		if (x < 48)
		{
			printf(", ");
		}
		a = b;
		b = c;
		x++;
	}
	return (0);
}
