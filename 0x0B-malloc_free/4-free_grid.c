#include <stdlib.h>

/**
 * free_grid - will free up memory occupied by grid *ptr
 * @grid: input matrix
 * @height: Height dim of matrix
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
