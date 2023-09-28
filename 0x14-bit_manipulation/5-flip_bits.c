#include "main.h"
/**
 * flip_bits - will calc num of bits to be flip to move from n to m.
 * @n: starting point
 * @m: ending point
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n,
		unsigned long int m)
{
	unsigned long int r = n ^ m;
	unsigned int x = 0;

	while (r > 0)
	{
		if (r & 1)
		{
			x++;
		}
		r >>= 1;
	}
	return (x);
}
