/**
 * _memcpy - copies memory area
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of bytes to copy from src to dest
 * Return: Memory location Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while(n > 0)
	{
		*dest = *src;
		n--;
		src++;
		dest++;
	}
	return (dest);
}
