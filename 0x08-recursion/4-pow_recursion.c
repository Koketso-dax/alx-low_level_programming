/**
 * _pow_recursion - will return x raised to the exponent y.
 * @x: int input
 * @y: in input
 * Return: x raised to the power y or -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	int _x = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	_x *= _pow_recursion(x, y - 1);
	return (_x);
}
