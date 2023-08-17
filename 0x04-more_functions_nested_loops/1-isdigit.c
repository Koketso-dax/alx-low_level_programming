/**
 * _isdigit - will confirm if input char is a digit or not.
 * @c: input number.
 * Return: 1 if true, 0 if false.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
