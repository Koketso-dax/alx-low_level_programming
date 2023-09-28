#include "main.h"
/**
 * set_bit - will set a bit given a ptr
 * @n: bit address
 * @index: bit index
 * Return: 1 on success. -1 on fail.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}
