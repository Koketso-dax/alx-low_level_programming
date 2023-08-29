/**
 * _memcpy - copies memory area from src -> dest
 * @dest: destination memory area
 * @src: source memory area.
 * @n: number of bytes to be copied.
 * Return: pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
