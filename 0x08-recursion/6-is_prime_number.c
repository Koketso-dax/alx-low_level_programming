#include "main.h"
/**
 * is_prime_number - will determine if an input is a prime number
 * @n: int input
 * Return:1 if prime. 0 if false.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return(prime(n, n - 1));
}
/**
 * prime - will return 1 if given input is prime
 * @n: int input
 * Return: 1 if prime. 0 otherwise
 */
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
