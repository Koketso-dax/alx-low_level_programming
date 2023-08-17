/**
 * _isupper - returns 1 if upper and 0 otherwise.
 * @n - input char.
 * Returns: 0 or 1.
 */
int _isupper(int c)
{
	if (c > 64 && c < 90)
		return (1);
	else
		return (0);
}
