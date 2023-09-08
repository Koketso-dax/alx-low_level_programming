#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: old mem
 * @old_size: block size of old mem
 * @new_size: block size on new mem
 * Return: *ptr to new alloc or 0 on fail.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nmem;
	char *write;
	char *read;

	if (new_size == old_size)
		return (ptr);
	if (new_size > 0 || ptr == NULL)
	{
		nmem = malloc(new_size);
		if (nmem == NULL)
		{
			return (0);
		}
	}
	if (new_size >= 0 && ptr != NULL)
	{
		write = nmem;
		read = ptr;

		if (new_size < old_size)
			old_size = new_size;
		while (old_size--)
		{
			*write++ = *read++;
		}
	}
	free(ptr);
	return (nmem);
}
