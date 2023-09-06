/**
 * _strstr - will locate a sub str from a main set.
 * @haystack: main set
 * @needle: sub set
 * Return: pointer to beginning of location of matching str
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
		{
			return ((char *)src);
		}
		haystack = src + 1;
	}
	return (0);
}
