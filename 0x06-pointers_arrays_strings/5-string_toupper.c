/**
 * string_toupper - will change a string to upper case
 * @s: pointer input
 * Return: Upper case string
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] -= 32;
		}
		x++;
	}
	return (s);
}
