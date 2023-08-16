#include "main.h"
/**
 * _abs - calculates abs of int
 * @a: input int
 * Return: Abs value (no sign)
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
		return (a * -1);
}
