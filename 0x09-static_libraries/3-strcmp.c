#include <stddef.h>
/**
 * _strcmp - will compare 2 strings
 * @s1: first str
 * @s2: second str arg
 * Return: 0 if equal. >0 if first non-match char in s1 > in ASCII. <0 if
 * first non-matching char in s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
