/**
 * _strcat - will concatenate 2 strings.
 * @dest: first str arg
 * @src: second str arg
 * Return: Pointer to resultant concatenated str
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != 0)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
