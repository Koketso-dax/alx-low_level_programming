#include "main.h"
/**
 * print_sign - entry point for fn defined in main.h
 * @n: input number
 * description: returns relevant sign depending on input
 * Return: 1 if n > 0, 0 if n==0 and -1 if n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
