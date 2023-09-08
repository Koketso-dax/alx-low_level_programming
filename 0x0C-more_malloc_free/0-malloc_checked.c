#include <stdlib.h>
/**
 * malloc_checked - will allocate mem or return 98 status on fail
 * @b: memory amount to be allocated
 * Return: malloc or 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (!mem)
	{
		exit(98);
	}
	return (mem);
}
