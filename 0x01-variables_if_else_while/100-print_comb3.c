#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: will be 0 on success
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x < 57; x++)
	{
		for (y = x + 1; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if (x != 56 || y != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
