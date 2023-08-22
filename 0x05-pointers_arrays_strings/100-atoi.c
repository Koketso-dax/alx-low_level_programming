#include <stdbool.h>

/**
 * _atoi - converts string to interger
 * @s: string input
 * Return: int value or 0 if null
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	bool dg = false;
	
	while (*s != '\0')
	{
		if(*s == '-')
			sign = -1;
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0') * sign;
			dg = true;
		}
		else if (dg)
		{
			break;
		}
		s++;
	}
	return (num);
}
