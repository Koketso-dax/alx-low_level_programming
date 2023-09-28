#include "main.h"
/**
 * get_bit - will return a value at a given index
 * @n: value
 * @index: index position
 * Return: index position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
