#include <stdio.h>
/**
 * main - main block
 * Description:  printing the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
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

	y = 'A';

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');
	return (0);
}
