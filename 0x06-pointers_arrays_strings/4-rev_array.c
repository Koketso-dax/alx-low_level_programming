/**
 * reverse_array - will reverse an array
 * @a: input array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int x, y;

	for (x = 0, y = n - 1; x < y; x++, y--)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
	}
}
