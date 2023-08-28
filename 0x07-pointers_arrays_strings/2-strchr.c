/**
 * _strchr - willl locate the first character in a string
 * @s: input string
 * @c: character to search.
 * Return: memory address to first occurance or null if no entry exists.
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}
	return (0);
}
