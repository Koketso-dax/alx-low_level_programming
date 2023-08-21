#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other char in string
 * @str: input string
 */

void puts2(char *str)
{
	int x;
	int len = strlen(str);

	for (x = 0; x < len; x++)
	{
		if ( x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}

