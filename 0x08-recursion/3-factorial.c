/**
 * factorial - will calc the factorial of a given input
 * @n: input number
 * Return: factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (n);
	}
	return (n * factorial(n - 1));
}
