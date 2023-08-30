#include <string.h>
#include "main.h"
/**
 * is_palindrome - will determine if str is a palandrome
 * @s: input str
 * Return:1 if true. 0 if false.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	return (check_str(s, 0, len - 1));
}

/**
 * check_str - will check individual str
 * @s: input str
 * @left: left stack frame
 * @right: right stack frame
 * Return: 1 or 0.
 */
int check_str(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (check_str(s, left + 1, right - 1));
}
