#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: input byte str
 * Return: unsigned int value
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		n <<= 1;

		if (b[x] == '1')
		{
			n += 1;
		}
		x++;
	}
	return (n);
}
