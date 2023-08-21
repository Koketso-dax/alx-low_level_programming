/**
 * swap_int - will swap the values of 2 int
 * @a: input int
 * @b: input int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
