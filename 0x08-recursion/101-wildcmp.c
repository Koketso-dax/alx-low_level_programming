/**
 * wildcmp - will compare 2 wild card str
 * @s1: 1st str input
 * @s2: 2ns str input
 * Return: 1 if true. 0 if false.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}
	return (0);
}
