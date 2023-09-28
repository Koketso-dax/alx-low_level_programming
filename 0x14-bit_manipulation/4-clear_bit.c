#include "main.h"

/**
 * clear_bit - will reset a value at given index
 * @n: address of value
 * @index: index of value
 * Return: 1 on success. -1 on fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
