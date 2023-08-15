#include <stdio.h>
/**
 * main - entry point function for prototype defined in main.h.
 * description: prints out alphabet from a-z (lowercase)
 * Return: must be 0.
 */
int main(void)
{
	char _abc = 'a';

	while (_abc <= 'z')
	{
	putchar (_abc);
	_abc++;
	putchar ('\n');
	}
	return (0);
}
