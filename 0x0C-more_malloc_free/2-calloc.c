#include <stdlib.h>
/**
 * _calloc - will allocate mem in mul of size
 * @nmemb: num of mem blocks
 * @size: size per block
 * Return: *ptr to alloc block or NULL on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *_mem;
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (0);
	_mem = malloc(nmemb * size);

	if (_mem == NULL)
		return (0);
	x = nmemb * size;
	ptr = _mem;
	while (x)
	{
		*ptr++ = 0;
		x--;
	}
	return (_mem);
}
