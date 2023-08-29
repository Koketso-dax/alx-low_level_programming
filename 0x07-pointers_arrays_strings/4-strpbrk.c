/**
 * _strpbrk - locates first occurance for any sets in accept.
 * @s: input string.
 * @accept: subset str.
 * Return: pointer to the byte in s that matches one byte in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return (0);
}
