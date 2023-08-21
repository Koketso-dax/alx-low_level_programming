#include <string.h>
#include "main.h"
/**
 * puts_half - prints the 2nd half of the str
 * @str: input string.
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n;

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	for (; str[n] != '\0'; n++)
	{
		if (str[n] == '\0')
			break;
		_putchar(str[n]);
	}
	_putchar('\n');
}
