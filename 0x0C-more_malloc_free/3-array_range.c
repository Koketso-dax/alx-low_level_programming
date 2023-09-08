#include <stdlib.h>
/**
 * array_range - creates [] of int
 * @min: lower lim
 * @max: upper lim
 * Return: newly created [] or null
 */
int *array_range(int min, int max)
{
	int *a, *ptr;
	int size;

	if (min > max)
		return (0);
	size = max - min + 1;
	a = malloc(size * sizeof(int));
	if (a == NULL)
	{
		return (0);
	}
	ptr = a;
	while (size--)
	{
		*ptr++ = max - size;
	}
	return (a);
}
