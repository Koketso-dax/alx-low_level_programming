/**
 * _strncpy - will copy a string
 * @dest: destination to copy string to
 * @src: source to copy from
 * @n: number of byts to copy
 * Return: Pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
