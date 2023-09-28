#include "main.h"
/**
 * get_endianess - will determine if int stores MSB or LSB at first bit
 * Return: First bit of var
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	return ((int)(*c));
}
