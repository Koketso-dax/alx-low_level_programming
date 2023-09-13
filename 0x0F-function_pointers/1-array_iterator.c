#include <stddef.h>
/**
 * array_iterator - will perform an operation on each [] element
 * @array: input []
 * @size: [] size
 * @action: action ()
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
