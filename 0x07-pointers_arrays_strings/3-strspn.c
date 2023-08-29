/**
 * _strspn - will get the length of a prefix substring
 * @s: input string
 * @accept: search portion to match input
 * Return: number of bytes in input that matches accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (accept[y] == '\0')
		{
			return (x);
		}
	}
	return (x);
}
