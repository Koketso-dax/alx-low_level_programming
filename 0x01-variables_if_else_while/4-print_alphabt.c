#include <stdio.h>
/**
* main - main function block
* Description: print lowercase letters of the alphabet except 'q' and 'e'
* Return: 0
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}

	putchar('\n');
	return (0);
}
