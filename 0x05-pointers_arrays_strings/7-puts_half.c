#include <string.h>
#include "main.h"
/**
 * puts_half - prints the 2nd half of the str
 * @str: input string.
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int x, n;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
		n = len - n;
	}

	for (x = n; x < len; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
