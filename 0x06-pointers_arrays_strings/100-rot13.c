#include <ctype.h>
/**
 * rot13 - will encode a string using rot13 algorithm
 * @s: input string
 * Return: encrypted string
 */

char *rot13(char *s)
{
	char *involution = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *out_map = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x, y;

	for (x = 0; s[x] != '\0'; ++x)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == involution[y])
			{
				s[x] = out_map[y];
				break;
			}
		}
	}
	return (s);
}
