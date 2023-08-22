#include <stdbool.h>
#include <ctype.h>

/**
 * _atoi - converts string to interger
 * @s: string input
 * Return: int value or 0 if null
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	bool digits = false;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -1;
		else if (*s == '+' || isdigit(*s))
		{
			if (isdigit(*s))
			{
				num = (num * 10) + (*s - '0') * sign;
				digits = true;
			}
		}
		else if (digits || !isspace(*s))
		{
			break;
		}
		s++;
	}
	return (num);
}
