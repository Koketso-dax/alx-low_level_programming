/**
 * strncat - will concat str up to a certain nr of chars of the src
 * @dest: destination str
 * @src: source str
 * @n: number of bytes to copy from src
 * Return: pointer to resulting dest str
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
