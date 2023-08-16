#include <stdio.h>
/**
 * main - function entry point
 * description: prints sum of all multiples of 3 and 5 below 1024
 * return: should be zero.
 */
int main(void)
{
	int c = 0;
	int a = 0;

	while (c < 1024)
	{
		if ((c % 3 == 0) || (c % 5 == 0))
		{
			a += c;
		}
		c++;
	}
	printf('%d', a);
	return (0);
}
