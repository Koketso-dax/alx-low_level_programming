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

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			sign *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			num = (num * 10) + (s[0] - '0') * sign;
		else if (num)
			break;

		s++;
	}

	return (num);
}
