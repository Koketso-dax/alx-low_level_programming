#include <string.h>

/**
 * rev_string - will reverse a string
 * @s: input string
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int x;
	char tmp;

	for (x = 0; x < len / 2; x++)
	{
		tmp = s[x];
		s[x] = s[len - 1 - x];
		s[len - 1 - x] = tmp;
	}
}
