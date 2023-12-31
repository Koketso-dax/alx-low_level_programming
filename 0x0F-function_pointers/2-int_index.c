/**
 * int_index - will search for int
 * @array: input int []
 * @size: [] size
 * @cmp: callback search ()
 * Return: [] index of int or -1 on fail.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
