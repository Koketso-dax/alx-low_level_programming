#include <string.h>

/**
 * _strspn - will get the length of a prefix substring
 * @s: input string
 * @accept: search portion to match input
 * Return: number of bytes in input that matches accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	
	while (*s && strchr(s, *accept))
	{
		count++;
		accept++;
	}
	return (count);
}
