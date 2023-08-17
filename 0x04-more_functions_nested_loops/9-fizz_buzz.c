#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100. multiples of 3,5 and 3&&5 replaced
 * with Fizz, Buzz and FizzBuzz respectively.
 * Return: should be zero.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x == 1)
		{
			printf("%d", x);
		}
		else if (x % 3 == 0)
		{
			printf(" %s", "Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" %s", "Buzz");
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" %s", "FizzBuzz");
		}
		else
			printf(" %d", x);
	}
	putchar('\n');
	return (0);
}
