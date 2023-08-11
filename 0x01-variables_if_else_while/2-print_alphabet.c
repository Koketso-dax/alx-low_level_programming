#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
