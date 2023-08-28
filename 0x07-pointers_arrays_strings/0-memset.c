/**
 * _memset - will fill memory with an input conts byte
 * @s: output byte buffer
 * @b: const byte
 * @n: number of bytes to copy
 * Return: output pointer buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		n--;
		s++;
	}
	return (s);
}
