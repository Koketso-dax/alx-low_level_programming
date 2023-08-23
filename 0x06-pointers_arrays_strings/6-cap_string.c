/**
 * cap_string - will capitalize str
 * @s: Input string
 * Return: cap string
 */
char *cap_string(char *s)
{
	int x = 0;
	int y;
	char delim[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	while (s[x] != '\0')
	{
		for (y = 0; delim[y] != '\0'; y++)
		{
			if (s[x] == delim[y] && s[x + 1] >= 'a' && s[x + 1] <= 'z')
			{
				s[x + 1] -= 32;
			}
		}
		x++;
	}
	return (s);
}
