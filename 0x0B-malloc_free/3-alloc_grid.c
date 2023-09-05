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
	int **a = (int **)malloc(width * sizeof(int *));
	int x, y;

	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < width; x++)
	{
		a[x] = (int *)malloc(height * sizeof(int));
		if (a[x] == NULL)
		{
			return (NULL);
		}
	}
	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		{
			a[x][y] = 0;
		}
	}
	return (a);
}
