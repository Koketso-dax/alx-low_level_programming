#include "main.h"
#include <stdlib.h>
/**
 * create_array - will create a char[]
 * @size: [] size
 * @c: init char
 * Return: buffer pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(c));
		for (x = 0; x < size; x++)
		{
			arr[x] = c;
		}
	}
	return (arr);
}
