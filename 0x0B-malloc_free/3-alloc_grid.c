#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - will dynamically create 2D []
 * @width: [] width
 * @height: [] height
 * Return: *ptr to 2D [] of int
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	a = (int **)malloc(height * sizeof(int *));

	if (a == NULL)
	{
		return (0);
	}

	for (x = 0; x < height; x++)
	{
		a[x] = (int *)malloc(width * sizeof(int));
		if (a[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(a[y]);
			}
			free(a);
			return (0);
		}

		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}
	return (a);
}
