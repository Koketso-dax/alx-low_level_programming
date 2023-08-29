#include <stdio.h>
/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * @a: pointer to input matrix
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];
	}
	for (x = 0; x < size; x++)
	{
		sum2 += a[x * size + (size - 1 - x)];
	}
	printf("%d, %d\n", sum1, sum2);
}
